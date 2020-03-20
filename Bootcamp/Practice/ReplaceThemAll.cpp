#include<iostream>
using namespace std;
long convertRec(long num)
{
    if(num==0)
     return 0;
    long digit = num%10;
    if(digit==0)
       digit=5;
    return convertRec(num/10)*10+digit;
}
long convert(long num)
{
    if(num==0)
     return 5;
    else return convertRec(num);
}

int main() {
    
    long num;
    cin>>num;
    
    cout<<convert(num);
    
    return 0;
}
