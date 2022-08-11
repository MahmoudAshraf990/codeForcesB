#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


int main(){
    int bagSize, numOfContainers, sum=0, i=0;

    cin>>bagSize>>numOfContainers;
    vector<vector<int>> matchboxes(numOfContainers, vector<int>(2, 0)); 
    while(numOfContainers != 0){
        cin>>matchboxes[i][0]>>matchboxes[i][1];
        sum += matchboxes[i][0];
        i++;
        numOfContainers--;
    }
    int ans = 0;
    if(bagSize >= sum){
        for(int num =0; num<matchboxes.size(); num++)
            ans += (matchboxes[num][0] * matchboxes[num][1]);
        cout<<ans<<endl;
        return 0;
    }

    while(bagSize){

       int maxMatches =0;
       for(int i=0; i<matchboxes.size(); i++){
            if(matchboxes[maxMatches][1] < matchboxes[i][1])
                maxMatches = i;
       }

        if(bagSize <= matchboxes[maxMatches][0]){
            ans += bagSize*matchboxes[maxMatches][1];
            cout<<ans<<endl;
            return 0;
        }
        else{

            ans += (matchboxes[maxMatches][0]*matchboxes[maxMatches][1]);
            bagSize -= matchboxes[maxMatches][0];
            matchboxes[maxMatches][1] = 0;
        }
    }
    cout<<ans<<endl;

}

