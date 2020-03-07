#include<bits/stdc++.h>
using namespace std;
 
bool part(vector<int> a, int n, int k, long long max_sum){
    
    long long no_part{1}, curr_sum{};
    for(int i = 0; i < n; i++){
        if(a[i] > max_sum)
            return false;
            
        if(curr_sum+a[i] > max_sum){
            curr_sum = 0;
            no_part++;
        }
        
        if(no_part > k)
            return false;
        
        curr_sum += a[i];
    }
    
    return no_part <= k;
}
 
 
int calculate (vector<int> a, int k,int n) {
    long long low = 1, high = 10000000000;
    
    int ans{};
    while(low <= high){
        long long mid = (low + high)/2;
        
        if(part(a, n, k, mid)){
            ans = mid;
            high = mid-1;
        }
        
        else
            low = mid+1;
    }
    return ans;
}
 
int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int A_size,A_i;
        cin >> A_size;
        int K;
        cin >> K;
        vector<int> A;
        for(int i_A=0; i_A<A_size; i_A++)
        {
        	cin >> A_i;
        	A.push_back(A_i);
        }
    
        int out_;
        out_ = calculate(A, K,A_size);
        cout << out_ << '\n';
    }
}
