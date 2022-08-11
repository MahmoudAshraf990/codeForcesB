#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// int binarySearch(vector<int>& arr, int val) {
    
    int low = 0, high = arr.size() - 1;
    // if(val >= arr[high])
    //     return arr.size();
    // if(val < arr[low])
    //     return 0;
    
    // int mid = 0;
    // while (low <= high) {
    //     mid = low + (high - low) / 2;
    //     if (arr[mid] == val)
    //         return mid+1;
    //     if (arr[mid] > val)
    //         high = mid - 1;
    //     else
    //         low = mid + 1;
    // }
    // // val > arr[mid] && val < arr[mid+1] return mid
    // // val < arr[mid] 
    // if (val > arr[mid] && val < arr[mid + 1])
    //     return mid + 1;
    // if(val < arr[mid] && val > arr[mid - 1])
    //     return mid;
    // return 0;
// }


int searchNums(vector<int>& arr, int val){
    int low = 0, high = arr.size() - 1;
    if(val >= arr[high])
        return arr.size();
    if(val < arr[low])
        return 0;
    int mid = low + (high - low) / 2;
    if(arr[mid] < val){
        eeeeee
    }
    while(low <= high && arr[low] <= val){
        mid++;
        low++;
    }

    return mid;


}


int main() {
    int n = 0, q, temp = 0;
    cin >> n;
    vector<int> nums(n);
    while (n != 0) {
        cin >> nums[temp];
        temp++;
        n--;
    }
    sort(nums.begin(), nums.end());
    cin >> q;
    while (q != 0) {
        cin >> temp;
        cout << searchNums(nums, temp) << endl;
        q--;
    }


}




