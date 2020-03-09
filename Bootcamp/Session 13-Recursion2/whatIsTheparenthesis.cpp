#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;

    int n = str.length();
    int right = -1;
    int left = -1;
    for(int i=0;i<n;i++){
        if(str[i]==40){
            left = i;
        }
        if(str[i]==41){
            right = i;
        }
    }
    // cout<<left;
    // cout<<right;
    for(int j = left+1;j < right ; j++){
        cout<<str[j];
    }
    return 0;
}
