#include<iostream>
using namespace std;

int BinarySearch(int a[],int n,int key){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
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
    int n,key;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    cout<<BinarySearch(a,n,key)<<endl;;
    return 0;
}