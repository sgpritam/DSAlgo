#include<iostream>
using namespace std;
int main() {
    int r,c,startrow,endrow,startcol,endcol,i,j;

    int a[10][10];
    cin>>r>>c;
     startrow=0;
    startcol=0;
    endcol=c-1;
    endrow=r-1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    while(startrow<=endrow && startcol<=endcol){
        for(j=startcol;j<=endcol;j++){
            cout<<a[startrow][j]<<" ";
        }
        startrow++;
        for(i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;
    if(endrow>=startrow){   ///CHANGE
        for(j=endcol;j>=startcol;j--){
            cout<<a[endrow][j]<<" ";
            
        }
    
        endrow--;
        
    }
    if(startcol<=endcol){   ///CHANGE
        for(i=endrow;i>=startrow;i--){
            cout<<a[i][startcol]<<" ";
        }
        startcol++;
        
    }
    }
    // cout<<"END";

	return 0;
}

