#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
    int val = 1;
    while(row<=n){
        //Print numbers in every row
        //Count of numbers = row

        int count  = 1;
        while(count<=row){
            cout<<val<<" ";
            val = val + 1;
            count = count + 1;
           }
           cout << endl;
           row = row + 1;
        }
}

