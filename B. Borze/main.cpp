#include<iostream>
using namespace std;

int main(){
    string s, result = "";
    cin>>s;
    int i=0;
    while(i<s.size()){
        if((i)<s.size() && s[i] == '-' && s[i+1] == '.'){
            result += '1';
            i += 2;
        }
        else if((i)<s.size() && s[i] == '-' && s[i+1] == '-'){
            result += '2';
            i += 2;
        }
        else{
            result += '0';
            i += 1;
        }
    }
    cout<<result<<endl;
}
