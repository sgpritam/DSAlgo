#include <iostream>
using namespace std;
int TriangleNum(int n,int sum){
        if(n==1){
            return 1;
        }
        sum += n + TriangleNum(n-1,sum);
        return sum;    
}
int main(){
  int n;
  cin >> n;
  cout  <<  TriangleNum(n,0) << endl;
  return 0;
}