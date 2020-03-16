#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int fruit_type[n],price[n];
        // ,sum=0,minn=9999;
        for(int i=0;i<n;i++)
            cin>>fruit_type[i];
        for(int i=0;i<n;i++)
            cin>>price[i];

        int SumOfFruit[m+1];
        bool availableArray[m+1];
        memset(SumOfFruit,0,sizeof(SumOfFruit));
        memset(availableArray,0,sizeof(availableArray));
       
        for(int i=0;i<n;i++)
        {
            SumOfFruit[fruit_type[i]]+=price[i];
            availableArray[fruit_type[i]]=1;
        }

        int res=INT_MAX;
        for(int i=1;i<m+1;i++)
        {
            if(availableArray[i]==1)
            {
                res=min(res,SumOfFruit[i]);
            }
        }
        cout<<res<<endl;
    
        //  if(sum<minn&&sum>0)
        //     {minn=sum;}
        //     sum=0;}
        //  cout<<minn<<endl;
        //  minn=9999;

    } 
    return 0;
}