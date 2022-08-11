#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,temp=0;
    cin>>n>>m;
    vector<ll> rooms(n);
    for(int i=0; i<n; i++){
        cin>>rooms[i];
        rooms[i] += temp;
        temp = rooms[i];
    }
        
    vector<ll> letters(m);
    //int letter = 0;
    temp = 0; 
    for(int j=0; j<m; j++)
        cin>>letters[j];

    int p1=0, p2=0;

    while(p2<m && p1<n){
        if(letters[p2] <= rooms[p1]){
            cout<<p1+1<<" "<< letters[p2]-temp<<endl;
            p2++;
        }
        else{
            temp = rooms[p1];
            p1++;
        }
    }
}
