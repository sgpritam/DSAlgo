#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
        // Base case
        if(n==1){
            return;
        }

        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        bubbleSort(a,n-1);
}

int main(){
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bubbleSort(a,n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
}




