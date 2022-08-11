#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    int res = 0, j=0;
    while(m != 0 && j<n){
        if(arr[j] < 0){
            res += (arr[j]*-1);
        }
        m--;
        j++;

    }
    cout<<res<<endl;

}

