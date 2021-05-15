#include <bits/stdc++.h>

using namespace std;
#define tam 100001
int A[tam][3],n;
int dp[tam][3];
int solver(int y, int x)
{
    if(dp[y][x]!=-1)
        return dp[y][x];
    if(y == 0 )
    {
    	dp[y][x] = A[y][x];
        return A[y][x];
    }
    return dp[y][x] = max(solver((y-1),(x+1)%3)+ A[y][x],
	solver((y-1),(x+2)%3) + A[y][x]);
}
int main()
{
    int bas;
    cin>>n;
    for(int i = 0;i < n ;i++)
        for(int j = 0 ; j < 3; j++)
            cin >>A[i][j];
    memset(dp,-1,sizeof dp);
     for(int i = 0; i < 3; i ++)
    	bas = solver(n-1,i);
    cout <<max(max(dp[n-1][0],dp[n-1][1]),max(dp[n-1][0],dp[n-1][2]))<<"\n";
    return 0;
}