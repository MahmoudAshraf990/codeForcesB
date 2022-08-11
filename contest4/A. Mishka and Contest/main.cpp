#include<iostream>
#include<vector>


using namespace std;


int main(){
    int n,k;
    cin>>n>>k;

    vector<int> nums;
    int tmp;
    while (n != 0)
    {
        /* code */
        cin>>tmp;
        nums.push_back(tmp);
        n--;
    }
    int low=0, high = nums.size()-1, res = 0;
    while(nums[0] <= k || nums[high] <= k){
        res++;
        if(nums[0] <= k){
            nums.erase(nums.begin());
        }
        else if(nums[high] <= k){
            nums.erase(nums.begin()+high);  
        }
        high = nums.size()-1;
        if(!nums.size())
            break;
    }
    cout<<res<<endl;


    
}
