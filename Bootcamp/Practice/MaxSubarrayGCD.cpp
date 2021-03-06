#include "bits/stdc++.h"
using namespace std;
const int N = 5e5 + 5;
int n , k;
int arr[N];
int pre[N];
int suf[N];
int gcd(int a , int b){
    while(b){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
bool check(int val){
    for(int i = 1 ; i <= n ; i += val){
        int l = i;
        int r = min(n , i + val - 1);
        pre[l] = arr[l];
        for(int j = l + 1 ; j <= r ; ++j){
            pre[j] = gcd(pre[j - 1] , arr[j]);
        }
        suf[r] = arr[r];
        for(int j = r - 1 ; j >= l ; --j){
            suf[j] = gcd(suf[j + 1] , arr[j]);
        }
    }
    for(int i = 1 ; i + val - 1 <= n ; ++i){
        if(gcd(suf[i] , pre[i + val - 1]) >= k){
            return 1;
        }
    }
    return 0;
}
int solve(){
    int l = 1;
    int r = n + 1;
    while(l < r){
        int mid = l + r >> 1;
        if(check(mid)){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    return l - 1;
}
int main(){
    scanf("%d %d" , &n , &k);
    for(int i = 1 ; i <= n ; ++i){
        scanf("%d" , arr + i);
    }
    printf("%d\n" , solve());
}
