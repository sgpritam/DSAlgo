#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<'*'<<" ";
    }
    for(int space=1;space<=2*(n-i)-1;space++){
        cout<<" "<<" ";
    }
    for(int j=1;j<=i;j++){
      if(j!=n){
        cout<<'*'<<" ";
      }
    }
    cout<<endl;
}
return 0;
}


