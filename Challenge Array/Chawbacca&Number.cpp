#include<iostream>
using namespace std;
int main() {
	char a[50];
	cin>>a;

	int i=0;
	if(a[i]=='9')
	{
		i++;
	}
	// Iterate over remaining chars
	for( ;a[i]!='\0';i++)
	{
		// Convert my char into a int digit
		int digit=a[i]-'0';
		if(digit>=5)
		{
			digit=9-digit;
			a[i]=digit + '0';
		}
	}
	cout<<a<<endl;
	return 0;
}
