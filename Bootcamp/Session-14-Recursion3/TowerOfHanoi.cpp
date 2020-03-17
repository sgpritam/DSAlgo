#include <iostream>
using namespace std;

void towerofhanoi(int n, char src, char dest, char helper)
{
   
    if(n==0)
    {
        return ;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<"th disc from T"<<src<<" to T"<<dest<<endl;   
    towerofhanoi(n-1,helper,dest,src);

}

int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'1','2','3');    
    cout<<endl<<((1<<n)-1); 
    return 0;
}
