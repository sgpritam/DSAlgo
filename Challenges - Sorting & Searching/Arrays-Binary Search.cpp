#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){
	int s= 0;
	int e= n-1;
	int ans = -1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}
    return -1;
}

int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int key;
	cin>>key;

	cout<<binarySearch(a,n,key)<<endl;
}
