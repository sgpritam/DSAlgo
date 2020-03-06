#include<iostream> //n is only odd
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n/2+1){
        int space=1;
    while(space<=n/2-i+1){
        cout<<" ";
    space++;
    }
    int j=1;
    while(j<=2*i-1){
      if(j==1 || j==2*i-1){
        cout<<'*';
      }
      else{
        cout<<" ";
      }
      j++;
    }
    i++;
cout<<endl;
}

// Lower Loop
i=1;
while(i<=n/2){
        int space=1;
    while(space<=i){
        cout<<" ";
space++;
    }
    int j=1;
    while(j<=n-2*i){
        if(j==1 || j==n-2*i){
            cout<<'*';
        }
        else{
            cout<<" ";
        }
        j++;
    }
  i++;
cout<<endl;
}
return 0;
}
