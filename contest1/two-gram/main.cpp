#include<iostream>
#include<map>
using namespace std;


int main(){
    int n;
    string s, first = "";
    cin>>n;
    cin>>s;
    if(n == 2){
         return cout<<s<<endl, 0;
    }
    map<string, int> freq;
    for(int i=0; i<2; i++)
        first += s[i];
    freq[first]++;
    string temp;
    for(int j=1; j<n; j++){
        temp += s[j];
        if(j != n-1){
            temp += s[j+1];
            freq[temp]++;
        }
            
        temp = "";
    }

    string res = ""; int max = INT_MIN;
    for(auto it:freq){
        if(it.second > max){
            res = it.first;
            max = it.second;
        }
    }
    cout<<res<<endl;
}

