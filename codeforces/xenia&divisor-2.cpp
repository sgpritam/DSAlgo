#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define M 100050
struct node {
    int t,l,r;
}p[M];
int m;
bool find(int x,int a,int b){
    int s=0,e=m-1,mid;
    while(s<=e){
        mid=(s+e)>>1;
        if(p[mid].t==x){
            if((a<p[mid].l||a>p[mid].r)&&(b<p[mid].l||b>p[mid].r))return true;
            else return false;
        }
        else if(p[mid].t<x)
        s=mid+1;
        else if(p[mid].t>x)
        e=mid-1;
    }
    return true;
}
int main()
{
    int n,s,f,i,ans;char c;
    while(scanf("%d%d%d%d",&n,&m,&s,&f)!=EOF){
        if(s<f)c='R',ans=1;
        else c='L',ans=-1;
        for(i=0;i<m;i++){
            scanf("%d%d%d",&p[i].t,&p[i].l,&p[i].r);
        }
        int t=1;
        while(s!=f){
            if(find(t,s,s+ans)) s+=ans,printf("%c",c);
            else printf("X");
            t++;
        }
        printf("\n");
    }
    return 0;
}

