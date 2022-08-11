#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


//171 ms

int main(){
    int n=0, num=0;
    cin>>n;
    set<int> nums;
    while(n != 0){
        cin>>num;
        if(num != 0)
            nums.insert(num);
        n--;
    }
   
    cout<<nums.size()<<endl;

}

// more optimaized 

// // set<int> nums; add all elements to it ==> return its size

// 150ms

//  int low = 1, result = 0;
//     sort(nums.begin(), nums.end());
//     if(nums[0] != 0){
//         sum += (nums[0]*-1);
//         result++;
//     }
//     for(low; low<nums.size(); low++){
//         if(nums[low] == nums[low-1] || nums[low] == 0)
//             continue;
//         sum += (nums[low]*-1);
//         result++;
//     }








