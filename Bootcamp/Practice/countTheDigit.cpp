#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int d;
    cin>>n>>d;
    long long int count =0;
    while(n>0){
        count = (n%10==d) ? count +1 :  count;
        n = n/10;
    }
    cout<<count<<endl;
}
