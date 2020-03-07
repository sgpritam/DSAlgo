/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n , m , g , gap , cnt =0;
cin>>n>>m>>g;
int t[n] , a[m];
for(int i=0 ; i<n ;i++) cin>>t[i];
for(int i=0 ; i<m ; i++) cin>>a[i];
for(int i=1 ; i<n ; i++)
{
gap = t[i] - t[i-1];
for(int i=0 ; i<m ; i++)
{
if(gap>=a[i])
{
cnt++;
a[i]=INT_MAX;
}
}
}
cout<<cnt;
}