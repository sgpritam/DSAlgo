#include<bits/stdc++.h>
using namespace std;

int main() {
int n, k;
cin >> n;
int arr[n + 1];
for (int i = 0; i < n; i++) {
    cin >> arr[i];
    
}
arr[n + 1] = -1;
cin >> k;
sort(arr, arr + n);
int j = 1;
for (int i = 0; i < n; i++) {
    if (arr[i] == arr[i + 1]) {
        j++;
        
    }
    else{
        if (j == k) { 
            cout << arr[i]; 
            return 0; 
            
        }
        j = 1;
    }
}
return 0;
}
