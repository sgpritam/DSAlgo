#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int largest=INT_MIN;
    int smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<" largest : "<<largest<<endl;
    cout<<" smallest : "<<smallest<<endl;
    return 0;
}