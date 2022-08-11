#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// aaaaaaaaaaaaaaaaccccccccccccccccc
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    int tmp = 0;
    for(int i=1; i<=n; i++){
        cin>>tmp;
        nums.push_back(tmp);
    }
    int low = 0, high = n-1;
    bool flag = true;
    while(low < high){
        if(flag){
            swap(nums[low], nums[high]);
            flag = false;
        }
        else{
            flag = true;
        }
        low++;
        high--;
    }
    for(int j=0; j<n; j++){
        if(j==n-1)
            cout<<nums[j];
        else{
            cout<<nums[j]<<" ";
        }
    }
        
}




