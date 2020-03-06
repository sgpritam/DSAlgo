#include <iostream>
#include <algorithm>
long combi(int n,int k)
{
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

int main() {
    int T, n, k;
    std::cin >> T;
    while (T--)
    {
        std::cin >> n >> k;
        std::cout << combi(n - 1, k - 1) << std::endl;
    }
    return 0;
}

