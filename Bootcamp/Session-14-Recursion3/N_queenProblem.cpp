
#include<bits/stdc++.h>
using namespace std;

int chessBoard[20][20]={0};
int counter = 0;

bool isSafe(int i,int j,int n)
{
	for(int row=i;row>=0;row--)
	{
		if(chessBoard[row][j]==1)
			return false;
	}
	//left diagonal
	int row=i,col=j;
	while(row>=0 && col>=0)
	{
		if(chessBoard[row][col]==1)
			return false;
		row--,col--;
	}
	//right diagonal
	row=i,col=j;
	while(row>=0 && col<n)
	{
		if(chessBoard[row][col]==1)
			return false;
		row--,col++;
	}
	return true;
}

bool nQueen(int i,int n)
{
	//base
	if(i==n)
	{
		counter++;
		//print chessboard
		for(int row=0;row<n;row++)
		{
			for(int col=0;col<n;col++)
			{
				if(chessBoard[row][col]==1)
					cout<<"{"<<row+1<<"-"<<col+1<<"} ";
			}
		}
		return false;
	}
	for(int col=0;col<n;col++)
	{
		if(isSafe(i,col,n))
		{
			chessBoard[i][col]=1;
			bool nextRakhPaye = nQueen(i+1,n);
			if(nextRakhPaye)
			{
				return true;
			}
			chessBoard[i][col]=0;
		}
	}
	return false;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	nQueen(0,n);
	cout<<endl<<counter<<endl;
	return 0;
}
