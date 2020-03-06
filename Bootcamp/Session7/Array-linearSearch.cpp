#include<iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    const long long size=n;
    long long arr[size];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long m;
    cin>>m;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(arr[i]==m)
        {
            ans=true;
            cout<<i;
            break;
        }    
    }
    if(!ans)
        cout<<-1;
	
}
