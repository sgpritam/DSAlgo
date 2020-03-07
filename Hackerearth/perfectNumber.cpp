#include<stdio.h>
void main()
{
    int t,n,s=0,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            s=s+j;
        }
        if(s==n)
        printf("YES\n");
        else
        printf("NO\n");
    }
}