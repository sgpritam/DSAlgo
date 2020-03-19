#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<string>v;
void subsequences(string input,string output)
{
        if(input.length()==0)
        {
            v.push_back(output);
            return;
        }
    char ch=input[0];
    string ros=input.substr(1);

    subsequences(ros,output);
    subsequences(ros,output+ch);
}
int main ()
{
    string input;
    int m,n;
    cin>>m;
    for(n=0;n<m;n++)
   {
        cin>>input;
        subsequences(input,"");
        sort(v.begin(),v.end());
        int s=v.size();
        for(int i=0;i<s;i++)
            {
            cout<<v[i]<<endl;
            }
        v.clear();
    }
}

