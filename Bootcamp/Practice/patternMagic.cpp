#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	for(int i=n;i>=1;i--)
    { 
			if(i==n)
		   for(int j=1;j<=2*n-1;j++)
		     cout<<"*";
			 else
			 {
				 for(int j=1;j<=i;j++)
				 cout<<"*";
				 for(int k=1;k<=2*(n-i)-1;k++)
				  cout<<" ";
				  for(int j=1;j<=i;j++)
				 cout<<"*"; 

			 }
		cout<<endl;
	}

	for(int i=2;i<=n;i++)
	{
		if(i==n)
		   for(int j=1;j<=2*n-1;j++)
		     cout<<"*";
			 else
			 {
	 for(int j=1;j<=i;j++)
		  cout<<"*";	
    
    for(int k=1;k<=2*(n-i)-1;k++)
				  cout<<" ";    

	 for(int j=1;j<=i;j++)
		 cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
