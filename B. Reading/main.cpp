#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    vector<int> nums;
    int cnt = 1;
   // map<int, int> freq;
    int tmp;
    while(n != 0){
        cin>>tmp;
        nums.push_back(tmp);
        n--;
    }
    vector<int> nums2 = nums;
    sort(nums2.begin(), nums2.end());
    int minVal = 0;
    while(nums2[cnt] == nums2[cnt-1]){
        minVal = nums2[cnt];
        cnt++;
    }
    minVal = nums2[cnt];
    cout<<minVal<<endl;
    for(int num=0; num<nums.size(); num++){
        if(nums[num] == nums2[0])
            continue;
        if(num == nums.size()-1){
            cout<<num+1;
        }
        else{
            cout<<num+1<<" ";
        }
        
    }



}

