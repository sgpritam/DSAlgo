#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s,int i,string out,int j)
{
	//base
	if(i==s.size())
	{
		if(out.size()==0)
			return true;
		return false;
	}
	//recursive case
	if(s[i]=='{' || s[i]=='[')
		return isBalanced(s,i+1,out+s[i],j+1);
	else if(s[i]=='}')
	{
		if(out.size()==0)
			return false;
		if(out[j-1]=='{')
		{
			out.pop_back();
			return  isBalanced(s,i+1,out,j-1);
		}
		else
			return false;
	}else if(s[i]==']')
	{
		if(out.size()==0)
			return false;
		if(out[j-1]=='[')
		{
			out.pop_back();
			return  isBalanced(s,i+1,out,j-1);
		}
		else
			return false;

	}else
	return isBalanced(s,i+1,out,j);
}
int main() {
	string s;
	cin>>s;
	if(isBalanced(s,0,"",0))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
