#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin>>nums[i];
    
    map<int, bool> freq;
    vector<int> res;
    for(int high = n-1; high>=0; high--){
        if(freq[nums[high]])
            continue;
        res.insert(res.begin(), nums[high]);
        freq[nums[high]] = true;
    }
    cout<<res.size()<<endl;
    for(int num=0; num<res.size(); num++){
        if(num == res.size()-1)
            cout<<res[num];
        else{
            cout<<res[num]<<" ";
        }
    }

}
