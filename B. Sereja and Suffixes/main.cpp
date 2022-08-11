#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int n, m, i = 0, j = i, temp=0;
    cin >> n >> m;
    set<int> freq;
    vector<int> nums(n);
    vector<int> result(n);
    while (n != 0) {
        cin >> nums[i];
        i++;
        n--;
    }
    
    for (j = nums.size()-1; j >= 0; j--) {
        if (freq.find(nums[j]) != freq.end()) {
            result[j] = temp;
        }
        else {
            temp++;
            result[j] = temp;
            freq.insert(nums[j]);
        }
    }

    while (m != 0) {
        cin >> temp;
        temp--;
        cout <<result[temp] << endl;
        m--;
    }

}





//time limit

//  int temp=0;
//     set<int> freq;
//     //cout<<"$$$$$$$$$$$$$$$$$$$"<<endl;
//     while(m != 0){
//         cin>>temp;
//         for(temp -= 1; temp<nums.size(); temp++){
//             freq.insert(nums[temp]);
//         }
//         cout<<freq.size()<<endl;
//         //cout<<"$$$$$$$$$$$$$$$$$$$"<<endl;
//         freq.clear();
//         m--;
//     }