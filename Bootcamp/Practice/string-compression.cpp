#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int len = str.length();
    
    for(int i=0;i<len;i++){
        int cnt=1;
       while (i < len - 1 && str[i] == str[i + 1]) { 
            cnt++; 
            i++; 
        }
        cout << str[i] << cnt;  
    }
    return 0;
}

