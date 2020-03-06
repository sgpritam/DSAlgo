/*
Take N (number of rows), print the following pattern (for N = 4).

                       1
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4


*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,j;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" \t";
        for(j=i;j<i+i;j++)
            cout<<j<<"\t";
        for(int k=j-2;k>=i;k--)
            cout<<k<<"\t";
        cout<<endl;
    }
}
