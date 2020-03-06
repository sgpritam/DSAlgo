#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(char *str){
    if(str[0]=='\0'){
        return;
    }
    // if adjacent character are same
    if(str[0]==str[1]){
        // Shift the character by one to left
        int i=0;
        while(str[i]!='\0'){
            str[i]=str[i+1];
            i++;
        }
        // update string str
        removeDuplicate(str);
    }
    // If the adjacent character are not same 
    removeDuplicate(str + 1);
}

int main(){
    char str[100];
    cin>>str;
    // int len=str.size();
    removeDuplicate(str);
    cout<<str<<endl;
}