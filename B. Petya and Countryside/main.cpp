#include<iostream>
#include<vector>


using namespace std;


int get_sections(int idx,  vector<int> &arr){
    //check left
    int res=1; int num1 = arr[idx], num2 = arr[idx];
    for(int i = idx-1; i >= 0; i--){
        if(arr[i] <= num1){
            res++;
            num1 = arr[i];
        }
        else{
            break;
        }
    }
    //check right
    for(int j = idx+1; j<arr.size(); j++){
        if(arr[j] <= num2){
            res++;
            num2 = arr[j];
        }
        else{
            break;
        }
    }
    return res;
}

int main(){

    int n=0;
    cin>>n;
    vector<int> heights(n);
    int i=0;
    while(n != 0){
        cin>>heights[i];
        i++;
        n--;
    }
    int max = 0, temp=0;
    for(int num =0; num<heights.size(); num++){
        temp = get_sections(num, heights);
        if(temp > max)
            max = temp;
    }
    cout<<max<<endl;
}
