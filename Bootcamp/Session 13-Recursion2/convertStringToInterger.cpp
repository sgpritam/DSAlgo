#include<iostream>
using namespace std;

char x[][10]={
    "0","1","2","3","4","5","6","7","8","9"
};

void Print(int n){
    if(n==0){
        return;
    }
   
    Print(n/10);
    cout<<x[n%10];
    
}
int main(){
    int n;
    cin>>n;

    Print(n);

    return 0;
}