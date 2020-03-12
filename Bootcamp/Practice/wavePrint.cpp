#include <iostream>
using namespace std;
int main() {
    int a[1000][1000];
    int m,n;
    cin>>m>>n;

    int val=1;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val=val + 1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    // Wave Print
    for(int col=0;col<n;col++){
        // For even col
        if(col%2==0){
            // Print Top to down 
            for(int row=0;row<m;row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            // Print Down to Up
            for(int row=m-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }
}
