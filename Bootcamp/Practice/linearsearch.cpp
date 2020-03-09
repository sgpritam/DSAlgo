#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int key){
    int i;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    // if(i==n){
    //     return false;
    // }
    return -1;
}

int main(){
    int a[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    int result=linearSearch(a,n,key);
    (result == -1) ? cout<<"Element is not present in array" : cout<<"Element is present at index " <<result; 
   return 0;
}