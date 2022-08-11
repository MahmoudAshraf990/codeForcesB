#include<iostream>
#include<map>
#include<vector>



using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    map<int, bool> freq;
    for(int i =0; i<n; i++){
        cin>>nums[i];
       // if(!freq[nums[i]])
        freq[nums[i]] = true;
    }
    if(k > freq.size())
        return cout<<"NO"<<endl, 0;
    vector<int> res;
    for(int j=0; j<nums.size() && k!=0; j++){
        if(freq[nums[j]]){
            res.push_back(j+1);
            freq[nums[j]] = false;
            k--;
        } 
    }

    cout<<"YES"<<endl;
    for(int num=0; num<res.size(); num++){
        if(num == res.size()-1)
            cout<<res[num];
        else{
            cout<<res[num]<<" ";
        }
    }
    

}




