#include <iostream>
using namespace std;
int main() {
    long long int n,m,x,y;
    cin>>n>>m>>x>>y;
    int s=0;
    int e=n;
    int mid;
    long long int ans=0;
    while(s<=e){
        mid=(s+e)/2;
        if((mid*x)<=m+(n-mid)*y){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
