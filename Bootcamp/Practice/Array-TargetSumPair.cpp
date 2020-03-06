#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{int a[10000];

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;cin>>target;
	for(int i=0;i< n;i++)
    {
        for(int j=i+1;j< n;j++)
        {
            if(a[i]>a[j])
            {
                int temp   =a[i];
                a[i]  =a[j];
                a[j]  =temp;
            }
        }
    }
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{   
			if(a[i]+a[j]==target and a[i]<=a[j]){
				cout<<a[i]<<" and "<<a[j]<<endl;
			}
		}
	}
	return 0;
}
