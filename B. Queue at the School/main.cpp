#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string s = "";
    cin>>s;
    int i = 0;
    while(t != 0){
        i=0;
        while(i < s.size()-1){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i += 2;
            }
            else
                i++;
        }
        t--;
    }
    cout<<s<<endl;
}


