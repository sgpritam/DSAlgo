#include <iostream>
using namespace std;

int sumOfDigit(int n){
    if(n==0){
        return 0;
    }
    return (n%10 + sumOfDigit(n/10));
}
int main() {
    int num;
    cin>>num;
    int result=sumOfDigit(num);
    cout<<result<<endl;
    return 0;
}
