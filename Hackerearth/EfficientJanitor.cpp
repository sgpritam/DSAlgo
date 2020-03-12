#include <bits/stdc++.h>
using namespace std;
int main() {
    float weight[10000];
    int n;
    cin>>n;
    int left_index=0;
    int trip=0;
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    sort(weight,weight+n);
    for(int i=n-1;i>=-1;i--){
        if(weight[i]>1.99){
            trip+=1;
        }
        else if(weight[i]<=1.99){
            if((weight[i]+weight[left_index])<=3){
                left_index +=1;
            }
            trip +=1;
        }
        if(left_index>=i){
            break;
        }
    }
    cout<<trip;
    return 0;
}
