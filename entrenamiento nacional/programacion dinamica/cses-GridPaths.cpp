#include <bits/stdc++.h>
using namespace std;
const int modulo = 1e9+7;

long n,dp[1001][1001];
string grid[1001];
long solver(int x,int y)
{
    if(x>n-1||y>n-1)
        return 0;
    if(grid[y][x]=='*')
        return 0;
    if(x==n-1&&y==n-1)
        return 1;
    if(dp[y][x]!=-1)
        return dp[y][x];
    return dp[y][x] = (solver(x,y+1) + solver(x+1,y))%modulo;
}
int main()
{
    cin>>n;
    for(int i =0;i < n;i++)
        cin>>grid[i];
    memset(dp,-1,sizeof dp);
    cout<<solver(0,0)<<"\n";
}
