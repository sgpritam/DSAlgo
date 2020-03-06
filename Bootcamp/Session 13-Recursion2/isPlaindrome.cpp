#include <bits/stdc++.h>
using namespace std;

bool isPlaindromeRec(char a[],int s,int e){
    // Base Case
    if(s==e){
        return true;
    }
    // Check first and last charaters do not match
    if(a[s]!=a[e]){
        return false;
    }
    // If there are more than two characters, check if middle substring is also palindrome or not.
    if(s<e+1){
        return isPlaindromeRec(a,s+1,e-1);
    }
    return true;
}

bool isPlaindrome(char a[]){
    int n=strlen(a);
    if(n==0){
        return true;
    }
    return isPlaindromeRec(a,0,n-1);
}

int main() {
    char a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isPlaindrome(a)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
