
#include<iostream>
using namespace std;
int main() {
	long long N;
	cin>>N;
	int a[1000000000];
	int c=1;
	while(N)
	{
	    a[c]=N%10;
	    N/=10;
	    c++;
	}
  
    for(int i=1;i<c;i++){
        if(a[a[i]] != i){ 
            cout<<"false"<<endl;
            return 0; 
        }
    }
    cout<<"true"<<endl;
}
