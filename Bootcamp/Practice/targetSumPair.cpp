#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  sort(arr, arr+n);
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        int a = arr[i];
        int b= arr[j];
        int c = arr[k];
        if(a+b+c==target){
          cout<<a << ", " << b << " and " << c <<endl;
        }
      }
    }
  }
	return 0;
}
