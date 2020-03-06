// Use Binary Search for find the index of element in sorted array.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int a[10000];
    int key;
    cin>>key;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int searchIndex=binarySearch(a,n,key);

    if(searchIndex==-1){
        cout<<key<<endl;
    }
    else{
        cout<<searchIndex<<endl;
    }
}