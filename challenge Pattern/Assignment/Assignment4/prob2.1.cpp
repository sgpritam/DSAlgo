#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        for(int space=1;space<=n/2-i+1;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // Lower loop
    for(int i=1;i<=n/2;i++){
        for(int space=1;space<=i;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-2*i;j++)
        {
            if(j==1 || j==n-2*i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}


