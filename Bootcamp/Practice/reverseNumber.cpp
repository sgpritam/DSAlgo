#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    // int max = a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n;i>0;i--){
        cout<<i<<",";
    }
    cout<<endl;
}
