#include <bits/stdc++.h>
using namespace std;
  int upperBound(int a[],int n,int key)
  {
      int s=0;
      int e=n-1;
       int ans=-1;

      while(s<=e)
      {
          int mid=(s+e)/2;

      if(a[mid]==key)
      {
          ans=mid;
          e=mid-1;

      }
      else if (a[mid]>key)
      {
          e=mid-1;

      }
         else{

         s=mid+1;
         }
  }
   return ans;

}


 int lowerBound(int a[],int n,int key)
  {
      int s=0;
      int e=n-1;
       int ans=-1;

      while(s<=e)
      {
          int mid=(s+e)/2;

      if(a[mid]==key)
      {
          ans=mid;
          s=mid+1;

      }
      else if(a[mid]>key)
      {
          e=mid-1;

      }
         else{

         s=mid+1;
         }
  }
   return ans;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int t;
   cin>>t;
   while(t--)
   {
    int key;
    cin>>key;

   int ans = upperBound(a,n,key);
   cout<<ans<<" ";
    ans= lowerBound(a,n,key);
   cout<<ans;
   cout<<endl;
   ans=0;
   }
   return 0;

}
