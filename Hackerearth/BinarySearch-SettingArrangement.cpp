#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,m,k,sum=0;
    int tc,q;
    cin>>n>>m>>k;
    int arr[n];
    int capacity[n+1]={0};
    set<int>::iterator it;
    for(int i=1;i<=m;i++)
    {
 
        s.insert(i);
    }
    for(int j=0;j<n;j++)
    {
 
        cin>>arr[j];
    }
    for(int j=0;j<n;j++)
    {
 
        int q=arr[j];
        it=s.lower_bound(q);
        if(it==s.end())it=s.begin();
        if((*it)!=q)sum++;
        capacity[(*it)]++;
        if(capacity[(*it)]==k)s.erase(*it);
    }
    cout<<sum<<endl;
    return 0;
}