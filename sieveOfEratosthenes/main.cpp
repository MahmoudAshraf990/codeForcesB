#include<iostream>
#include<vector>

using namespace std;

vector<int> primeFactors;

void factorNum(int &prime, int num){
    while(num % prime == 0){
        primeFactors.push_back(prime);
        num /= prime;
    }
}

void sieveOfEratosthenes(vector<int> &flags, int num){
    for(int x = 2; x <= num; x++){
        if(flags[x]){
            continue;
        }
        if(!flags[x]){
            factorNum(x, num);
        }
        for(int u = x*2; u<=num; u += x)
            flags[u] = 1;
    }
}



int max_prime_factor(){
    return primeFactors[primeFactors.size()-1];
}
int min_prime_factor(){
    return primeFactors[0];
}

int main(){
    int num = 0;
    cin>>num;
    vector<int> flags(num+1, 0);
    sieveOfEratosthenes(flags, num);
    // for(int n=0; n<primeFactors.size(); n++){
    //     if( n ==primeFactors.size()-1){
    //         cout<<primeFactors[n];
    //     }
    //     else{
    //        cout<<primeFactors[n]<<'*';
    //     }
    // }

    cout<<min_prime_factor()<<endl; 
}


