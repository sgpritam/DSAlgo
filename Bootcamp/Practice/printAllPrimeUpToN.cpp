#include <iostream>
using namespace std;

bool printPrime(int n){
    int i;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// Print all Prime number upto n.
int printAllPrimes(int N){
    for(int i=2;i<=N;i++){
        if(printPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main() {
    int n;
    cin>>n;
    printAllPrimes(n);
}
