#include<iostream>
using namespace std;

void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        // Loop for unsorted part
        for(int j=i;i<=n-1;j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        // After this loop we can do swap finally
        swap(a[i],a[min_idx]);
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
   SelectionSort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<",";
   }
    return 0;
}