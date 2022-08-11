#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseChar(vector<char> & chars){
    int high = chars.size()-1, low = 0;
    while (low < high){
        swap(chars[low], chars[high]);
        low++;
        high--;
    }
}


string decodeStr(string encodedd,  int wordSize){
    vector<char> arr;
    string result = "";
    arr.push_back(encodedd[0]);
    for(int i=1; i<wordSize; i++){
        if(i%2==0)
            arr.push_back(encodedd[i]);
        else{
            arr.insert(arr.begin(), encodedd[i]);
        }
    }
    if(wordSize%2==0){
      reverseChar(arr);
    }
    for(char c:arr){
        result +=c;
    }
    return result;
}


int main(){
    int wordSize = 0;
    string encodedd = "";
    cin>>wordSize;
    cin>>encodedd;

    string result = decodeStr(encodedd, wordSize);
    cout<<result<<endl;


}

