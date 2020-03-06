// Rat In Maze Problem
#include<iostream>
using namespace std;
bool RatInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m)
{
    // Base condition
    if(i==n-1 && j==m-1)
    {
       sol[i][j]=1;
       //Print the path
       for(int k=0;k<n;k++)
       {
           for(int i=0)
       }
    }
    // Rec case
    // Assume that current cell we are standing on is part of solution
    sol[i][j]=1;

    // First check Rightwards
    if(j+1<m && maze[i][j+1]!='X')
    {
        bool KyaRightSeRaastaMilla = RatInMaze(maze,sol,i,j+1,n,m);
        if(KyaRightSeRaastaMilla==true)
        {
            return true;
        }
    }
    // Check Downward
    if(i+1<n && maze[i+1][j]!='X')
    {
        bool KyaNeecheSeRaastaMilla= RatInMaze(maze,sol,i+1,j,m,n)
        {
            if(KyaNeecheSeRaastaMilla==true)
            {
                return true;
            }
        }
        sol[i][j]=0;
        return false;
    }
}

int main()
{
    char maze[5][5]=
    {
        "0000",
        "00XX",
        "0000",
        "XX00";
    }
    return 0;
}
