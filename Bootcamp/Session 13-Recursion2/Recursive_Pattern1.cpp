#include <bits/stdc++.h>
using namespace std;

void printPatterRec(int num){
	// Base case
    if(num==0){
        return;
    }
    cout<<"*	";
    printPatterRec(num-1);
}

void pattern(int n,int i){
	// Base case
    if(n==0){
        return;
    }
    printPatterRec(i);
    cout<<endl;
    pattern(n-1,i+1);
}

int main() {
    int n;
    cin>>n;
    pattern(n,1);
    return 0;
}
