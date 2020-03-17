#include <iostream>
using namespace std;

int isSortedArray(int a[],int n){
    if(n==0 || n==1){
        return 1;
    }
    if (a[n - 1] < a[n - 2]){
        return 0; 
    }
        
    return isSortedArray(a,n-1);
}

int main() {
    int a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSortedArray(a,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
