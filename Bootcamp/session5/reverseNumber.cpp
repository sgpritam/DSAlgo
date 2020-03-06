#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(;n!=0;){
        cout<<n%10;
        n=n/10;
    }
    cout<<endl;
}
