#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    int i;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int q;
    cin>>q;
    while(q--){
        int p;
        int count=0,sum=0;
        cin>>p;
        for(i=0;i<n;i++){
            if(s[i]<=p){
                count++;
                sum+=s[i];
            }
        }
 
        cout<<count<<" "<<sum<<endl;
    }
    
    return 0;
}