#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() < b.size()); 
}

 bool isSubsequence(string &s, string &t) {
        if(s == t)
            return true;
        if(s.size() > t.size())
            return false;
        
        int point_to_s=0; string temp = "";int i=0, j=0;
        while(i<t.size()){
            j = i;
            while(point_to_s<s.size() && s[point_to_s] == t[j]){
                temp += t[j];
                point_to_s++;
                j++;
            }
            if(temp == s)
                return true;
            else{
                temp = "";
                point_to_s = 0;
            }  


            
            i++;
        }
        return false;
    }



int main(){
    int n; 
    cin>>n;
    vector<string> strs(n);
    for(int i=0; i<n; i++)
        cin>>strs[i];
    sort(strs.begin(), strs.end(), compareLen);

    for(int j=0; j<strs.size(); j++){
        if(j< strs.size()-1 && strs[j].size() == strs[j+1].size() && strs[j] != strs[j+1])
            return cout<<"NO"<<endl, 0;
        if(j< strs.size()-1 && isSubsequence(strs[j], strs[j+1])==false)
            return cout<<"NO"<<endl, 0;
    }

    cout<<"YES"<<endl;
    for(string c:strs)
        cout<<c<<endl;
}



