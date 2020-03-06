#include <bits/stdc++.h> 
using namespace std; 

int getMin(int arr[], int n) 
{ 
	int res = arr[0]; 
	for (int i = 1; i < n; i++) 
		res = min(res, arr[i]); 
	return res; 
} 

int getMax(int arr[], int n) 
{ 
	int res = arr[0]; 
	for (int i = 1; i < n; i++) 
		res = max(res, arr[i]); 
	return res; 
} 

int main() 
{ 
	int arr[1000]; 
	int n; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<< getMax(arr, n) << "\n"; 
	cout<< getMin(arr, n); 
	return 0; 
} 

