#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    vector <int> v;
    v.reserve(100);  // Reserve memory size
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    v.pop_back();
    sort(v.begin(),v.end(),compare);
    //v.clear()
    cout<<v.capacity()<<endl;

    // Print these
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v.max_size()<<endl;
    return 0;
}
