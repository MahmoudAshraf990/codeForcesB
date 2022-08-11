#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n = 0, k=0, i=0;
    cin>>n>>k;
    vector<int> polycarb(n);
    while(n != 0){
        cin>>polycarb[i];
        i++;
        n--;
    }
    int add = 0;
    for(int j =1; j<polycarb.size(); j++){
        if(polycarb[j] + polycarb[j-1] >= k)
            continue;
        add += (k-(polycarb[j]+polycarb[j-1]));
        polycarb[j] += (k-(polycarb[j]+polycarb[j-1]));
    }
    cout<<add<<endl;

    for(int num=0; num<polycarb.size(); num++){
        if(num == polycarb.size()-1)
            cout<<polycarb[num];
        else{
            cout<<polycarb[num]<<" ";
        }
    }
        
}

