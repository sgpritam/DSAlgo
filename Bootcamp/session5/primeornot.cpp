
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
        i = i+ 1;
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
}
