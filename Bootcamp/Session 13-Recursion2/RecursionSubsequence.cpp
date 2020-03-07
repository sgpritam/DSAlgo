#include<iostream>
#include<cstring>
using namespace std;
void printsubsequences(string str,string osf)
{
  if(str.length()==0)
  {
    cout<<osf<<" ";
    return;
  }
  char ch=str[0];
  string ros=str.substr(1);
  printsubsequences(ros,osf);
  printsubsequences(ros,osf+ch);
}
long long int countsubsequences(string str,string osf)
{
  if(str.length()==0)
  {
    return 1;
  }
  char ch=str[0];
  string ros=str.substr(1);
  long long int result=0;
  result+=countsubsequences(ros,osf);
  result+=countsubsequences(ros,osf+ch);
  return result;
}
int main() 
{
	string str;
	cin>>str;
	printsubsequences(str," ");
	cout<<endl;
	long long int y=countsubsequences(str," ");
	cout<<y;
	return 0;
}































