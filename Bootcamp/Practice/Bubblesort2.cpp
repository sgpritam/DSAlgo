#include<iostream>
using namespace std;

void BubbleSort(int a[],int n){
    // N-1 large elements to the end
    for(int itr=1;itr<=n-1;itr++){
        // Pairwise swapping in the unsorted part of an array.
        for(int j=0;j<=(n-itr-1);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int a[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // cin>>key;
   BubbleSort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<",";
   }
    return 0;
}