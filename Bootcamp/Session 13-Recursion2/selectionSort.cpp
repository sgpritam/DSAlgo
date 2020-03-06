#include <iostream> 
using namespace std; 

// Return minimum index 
int minIndex(int a[], int i, int j) 
{ 
	if (i == j) 
		return i; 

	// Find minimum of remaining elements 
	int k = minIndex(a, i + 1, j); 

	// Return minimum of current and remaining. 
	return (a[i] < a[k])? i : k; 
} 

// Recursive selection sort. n is size of a[] and index 
// is index of starting element. 
void recurSelectionSort(int a[], int n, int index = 0) 
{ 
	// Return when starting and size are same 
	if (index == n) 
	return; 

	// calling minimum index function for minimum index 
	int k = minIndex(a, index, n-1); 

	// Swapping when index nd minimum index are not same 
	if (k != index) 
	swap(a[k], a[index]); 

	// Recursively calling selection sort function 
	recurSelectionSort(a, n, index + 1); 
} 
 
int main() 
{ 
	int arr[100]; 
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 

	// Calling function 
	recurSelectionSort(arr, n); 

	//printing sorted array 
	for (int i = 0; i<n ; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
	return 0; 
} 
