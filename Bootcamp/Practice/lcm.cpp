#include<iostream>
using namespace std;

void lcm(int,int);

int main()
{
    int a,b;

    cin>>a>>b;
   
 

    lcm(a,b);

  return 0;
}

void lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
	if(m < n)
	{
	m=m+a;
	}
	else
	{
	    n=n+b;
	    }
    }

    cout<<m;
}
