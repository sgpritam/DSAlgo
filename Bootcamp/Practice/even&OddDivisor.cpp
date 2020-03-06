#include <iostream>
using namespace std;
int main() {
    int q;
	cin>>q;
	while(q--)
	{
    
        int n;
        cin>>n;
        int sumEven = 0;
        int sumOdd = 0;
        int ans;
        // int a[1000];
        // for(int i=0;i<=n;i++){
        //     cin>>a[i];
        // }
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(i%2==0){
                    sumEven = sumEven + i;
                }
                else if(i%2!=0){
                    sumOdd = sumOdd + i;
                }

                    // cout<<i<<",";
            }
            
        }
        ans = (sumEven - sumOdd);
        // cout<<sumEven<<endl;;
        // cout<<sumOdd;
        cout<<ans<<endl;
    }
    return 0;
}

