#include<iostream>
using namespace std;

int elephantways(int m, int n)
{
    //base case
    if(m==0 && n==0)
        return 1;
    //recursive case
    int x=0,y=0;
    for(int k=1;k<=m;k++)
    {
        x= x+elephantways(m-k,n);
    }
    for(int k=1;k<=n;k++)
    {
        y= y+elephantways(m,n-k);
    }
    return x+y;

}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<elephantways(m,n)<<endl;
    return 0;
}