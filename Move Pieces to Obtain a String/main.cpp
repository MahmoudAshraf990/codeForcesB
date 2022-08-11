#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int get_position(char &c, int st, int end, string &start){

    for(st; st<end; st++){
        if(start[st] == c)
            return st;
    }
    return -1;

}


bool canChange(string start, string target) {
    int prt_target = 0;
    for(int i=0; i<start.size(); i++){
        if(prt_target == '_'){
            prt_target++;
            continue;
        }
        int idx = get_position(target[prt_target], i, start.size(), start);
        if(target[prt_target] == 'L'){
            if(!moveLeft())
                return false;

        }
            
    }
}

int main(){

}


