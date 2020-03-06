#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int left = -1;
    int right = -1;
    int currSum = 0;
    int maxSum = 0;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currSum = 0;
            for(int k=i;k<=j;k++){
                currSum = currSum + a[k];  
                
            }
            if(currSum>maxSum){
                maxSum = currSum;
                left = i;
                right = j;  
            }
           
        }
          
    }
     cout<<maxSum<<endl; 
    
    //Printing subarray
    for(int k=left;k<=right;k++){
        cout<<a[k]<<" ";
    }
}

