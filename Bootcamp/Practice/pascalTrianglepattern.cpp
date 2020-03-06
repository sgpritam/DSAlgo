#include<iostream>
using namespace std;

int main() 
{
	int h, digit;
	
	cin>>h;
	

	if(h<1)
	{
		return 0;
	} 
	else 
	{
		for(int i=0; i<h; i++)
		{
			for(int j=0; j<=i; j++)
			{
				if(i==0 || j==0)
					digit = 1;
				else
					digit = digit * (i-j+1)/j;
				cout<<digit<<" ";
			}
			cout<<"\n";
		}
	 }
	return 0;
}

