#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string countAndSay(int n) {
        string out="1";
    if(n==1)
            return out;
        int i,j;
        for(i=2;i<=n;i++){
            string temp=out;
            out="";
            int freq=0;
            for(j=0;j<temp.length();j++){
                freq+=1;
                if(j==temp.length()-1){//last char
                    out+=to_string(freq);
                    out+=temp[j];
                    continue;
                }
                
                if(temp[j]==temp[j+1])
                    continue;
                else{
                    out+=to_string(freq);
                    out+=temp[j];
                    freq=0;
                }
                
            }
            
        }
        return out;
 }

int main() {
    int n;
    cin>>n;
    cout<<countAndSay(n);
    return 0;
}
