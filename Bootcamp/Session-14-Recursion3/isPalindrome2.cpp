#include <bits/stdc++.h> 
using namespace std; 

// recursive function that returns the reverse of digits 
int rev(int n, int temp) 
{ 
	// base case 
	if (n == 0) 
		return temp; 

	// stores the reverse of a number 
	temp = (temp * 10) + (n % 10); 

	return rev(n / 10, temp); 
} 


int main() 
{ 

	int n; 
    cin>>n;
	
	int temp = rev(n, 0); 
	
	if (temp == n) 
		cout << "true" << endl; 
	else
		cout << "false" << endl; 
	return 0; 
} 
