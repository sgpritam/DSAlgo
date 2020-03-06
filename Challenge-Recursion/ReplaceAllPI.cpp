#include<iostream>
using namespace std;
char ch[1000000];
int k=0;
void replace(char *a,int i){
    
    if(a[i]=='\0'){
        ch[k++]='\0';
        return;
    }
    if(a[i]=='p'&&a[i+1]=='i'){
        ch[k++]='3';
        ch[k++]='.';
        ch[k++]='1';
        ch[k++]='4';
        replace(a,i+2);
    }
    else{
        ch[k++]=a[i];
        replace(a,i+1);
    }
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
    char a[10000];
    cin>>a;
    replace(a,0);
    cout<<ch<<endl;
    k=0;
    }
	return 0;
}

