#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s ="";
    cin>>s;
    int i=0,j=0, counter=0, res=0;
    while(i<n){
        j = i;
        while(s[j] == 'x'){
            counter++;
            if(counter >= 3)
                res++;
            j++;
            i = j;
        }
        i++;
        counter = 0;
        
    }
    cout<<res<<endl;
}
