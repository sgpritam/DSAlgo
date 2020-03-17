#include <bits/stdc++.h>
using namespace std;

char keys[][10]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void PhoneKeyPad(char *in,char *out,int i,int j){
	// base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
	// Recursive case
    int digit=in[i]-'0';
    for(int k=0;keys[digit][k]!='\0';k++){
        out[j]=keys[digit][k];
        PhoneKeyPad(in,out,i+1,j+1);
    }
}

int main() {
    char in[100];
    char out[100];
    cin>>in;
    PhoneKeyPad(in,out,0,0);

    return 0;
}
