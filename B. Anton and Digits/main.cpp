#include<iostream>

using namespace std;
int arr[7];


void MincountIn256(int &res){
    int c = INT_MAX;
    for(int j=2; j<7; j++){
        if(j == 3 || j==4)
            continue;
        if(arr[j] == 0)
            return;
        if(arr[j] < c)
            c = arr[j];
    }
    res += (256*c);

    for(int j=2; j<7; j++){
        if(j == 3 || j==4)
            continue;
        arr[j] -= c;
    }
}


void MincountIn32(int &res){
    int c = INT_MAX;
    int three = arr[3];
    int two = arr[2];
    if(!three || !two)
        return;
    if(three <= two){
        res += (32*three);
    }
    else{
        res += (32*two);
    }
}




int main(){
    
    
    int i= 2;
    for(i; i<7; i++)
        if(i != 4)
           cin>>arr[i];

    int res = 0;
    MincountIn256(res);
    MincountIn32(res);
    cout<<res<<endl;

}

