#include<iostream>
#include<set>

using namespace std;

int main(){
    
    int n=0, i=0;
    cin>>n;
    set<int> vals;
    while(n != 0){
        cin>>i;
        vals.insert(i);
        n--;
    }
    if(vals.size() >= 3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
}