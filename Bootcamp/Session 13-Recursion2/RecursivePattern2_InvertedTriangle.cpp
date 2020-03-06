#include <bits/stdc++.h>
using namespace std;

void printPatterRec(int n,int i){
    if(n<1){
        return;
    }
    if(i<=n){
        cout<<"*    ";
        printPatterRec(n,i+1);
    }
    else{
        cout<<endl;
        printPatterRec(n-1,1);
    }
}

int main() {
    int n;
    cin>>n;
    printPatterRec(n,1);
    return 0;
}
