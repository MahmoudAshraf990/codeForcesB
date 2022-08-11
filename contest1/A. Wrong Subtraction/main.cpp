#include<iostream>

using namespace std;


int main(){
    int num, k;
    cin>>num>>k;
    while(k != 0){
        if(num % 10 != 0){
            num--;
        }
        else{
            num /= 10;
        }
        k--;
    }
    cout<<num<<endl;
}

