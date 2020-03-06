#include<iostream>
using namespace std;

int main(){
	int n,p;
	cin>>n>>p;
	float ans = 0;
	float inc = 1;
	float curr_precision = 0;
	while(curr_precision<=p){
		while(ans*ans<=n){
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc/10;
		curr_precision = curr_precision + 1;
	}
	cout<<ans<<endl;
}
