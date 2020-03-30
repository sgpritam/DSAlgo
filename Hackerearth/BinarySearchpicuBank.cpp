#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while (t--){
    int d,a,m,b,x,ans,rem,inc,t1;
    cin>>d>>a>>m>>b>>x;
    inc=x-d;
    t1=m*a +b;
    ans=inc/t1 *(m+1);
    rem=inc%t1;
    ans+=rem/a;
    if(rem%a!=0){
        ans+=1;
    }
    cout<<ans<<endl;
    
    }
    return 0;
}

