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
int main() {
    int n;
    cin>>n;
    if(printPrime(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
