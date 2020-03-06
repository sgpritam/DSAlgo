#include<iostream>
#include<cstring>
using namespace std;

char keypad[][10]={" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printKeypadString(char *in,char *out,int i,int j)
{
    // Base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<",";
        return;
    }
    // Rec case
    int digit = in[i]-'0';
    // if in input takes 2113 the its skip the 11 recursively
    if(digit==1 || digit==0)
    {
        printKeypadString(in,out,i+1,j);
    }
    for(int k=0;keypad[i][k]!='\0';k++)
    {
        out[j]=keypad[i][k];
        printKeypadString(in,out,i+1,j+1);
    }
}
int main()
{
    char in[100];
    char out[100];
    cin>>in;
    printKeypadString(in,out,0,0);
    return 0;
}
