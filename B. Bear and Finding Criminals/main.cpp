#include<iostream>
#include<vector>


using namespace std;

int main(){
    int n, a;
    cin>>n>>a;
    vector<int> criminals(n);
    int 
    i=0;
    while(n != 0){
        cin>>criminals[i];
        i++;
        n--;
    }
    int res = 0; int left=a-2, right = a;
    if(criminals[a-1] == 1)
        res++;
    for(; left>=0 && right < criminals.size(); left--, right++) {
        if(criminals[left] && criminals[right]){
            res += 2;
        }
    }
    while(left >= 0){
        if(criminals[left])
            res++;
        left--;
    }
    while(right < criminals.size()){
        if(criminals[right])
            res++;
        right++;
    }
    cout<<res<<endl;
}
