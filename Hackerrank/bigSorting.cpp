 #include<bits/stdc++.h> 
using namespace std; 

// comp function to perform sorting 
bool comp(const string &left, const string &right) 
{ 
	// if length of both string are equals then sort 
	// them in lexicographically order 
	if (left.size() == right.size()) 
		return left < right; 

	// Otherwise sort them according to the length 
	// of string in ascending order 
	else
		return left.size() < right.size(); 
} 

// Function to sort arr[] elements according 
// to integer value 
void SortingBigIntegers(string arr[], int n) 
{ 
	// Copy the arr[] elements to sortArr[] 
	vector<string> sortArr(arr, arr + n); 

	// Inbuilt sort function using function as comp 
	sort(sortArr.begin(), sortArr.end(), comp); 

	// Print the final sorted array 
	for (auto &ele : sortArr) 
		cout << ele << " "<<endl;; 
} 

int main() 
{ 
	string arr[1000000]; 
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	SortingBigIntegers(arr, n); 

	return 0; 
} 
