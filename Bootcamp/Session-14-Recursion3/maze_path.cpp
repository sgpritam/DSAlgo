#include<iostream>
using namespace std;

int count(int currow,int curcol,int endrow,int endcol){
    
    if(curcol==endcol and currow==endrow){
        return 1;
        
    }
    if(curcol>endcol or currow>endrow){
        return 0;
    }
    
    int vresult=count(currow+1,curcol,endrow,endcol);
    int hresult=count(currow,curcol+1,endrow,endcol);
    
    int myresult=vresult+hresult;
    return myresult;
}


void print(int currow,int curcol,int endrow,int endcol,string osf){
    
    if(curcol==endcol and currow==endrow){
        cout<<osf<<" ";
        return ;
        
    }
    if(curcol>endcol or currow>endrow){
        return ;
    }
    
    print(currow+1,curcol,endrow,endcol,osf+"V");
    print(currow,curcol+1,endrow,endcol,osf+"H");
    
   
}

int main() {
    int n,m;
    cin>>n>>m;
    print(1,1,n,m,"");
    cout<<endl;
    cout<<count(0,0,n-1,m-1);
	return 0;
}