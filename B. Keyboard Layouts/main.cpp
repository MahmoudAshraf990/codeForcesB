#include<iostream>

#include<map>

using namespace std;


int main(){

    string frist, second, text;
    cin>>frist;
    cin>>second;
    map<char, char> letters;
    for(int i=0; i<frist.size(); i++){
        letters[frist[i]] = second[i];
    }
    cin>>text;
    bool capital = false;
    for(int j=0; j<text.size(); j++){
        if(text[j] >= 'A' && text[j] <= 'Z'){
            capital = true;
            text[j] += 32;
        }
        if(!capital && text[j] >= 'a' && text[j] <= 'z')
            text[j] = letters[text[j]];
        else if(text[j] >= 'a' && text[j] <= 'z'){
            text[j] = (letters[text[j]]-32);
        }
        // else 
        //     text = text[j];
        capital = false;
    }

    cout<<text<<endl;
}