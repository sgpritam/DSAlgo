#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    int i;
    for(num=1;num<=n;num=num+1){
        i = 2;
        while(i<=num){
            if(num%i==0){
            break;
            }
            i = i+1;

    }
    if(i==num){
        cout<<num<<" ";
        }
    }
    cout<<endl;
}
