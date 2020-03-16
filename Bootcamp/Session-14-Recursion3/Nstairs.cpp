#include <iostream>
using namespace std;

int Nstairs(int n){
    // Base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    // Rec case
    return Nstairs(n-1)+Nstairs(n-2)+Nstairs(n-3);
}

int nstair(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=nstair(n-i,k);
    }
}

int main() {
    int n;
    cin>>n;


    cout<<Nstairs(n)<<endl;
    cout<<nstair(n)<<endl;
}
