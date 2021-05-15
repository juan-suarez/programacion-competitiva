#include <bits/stdc++.h>
using namespace std;
int n,x,A[101],dp[101][1000001],ans;
const int modulo = 1e9+7,inf = 1e9;
int solver(int i,int sum)
{
    if(sum > x)
        return 0;
    if(sum==x)
        return 1;
    if(dp[i][sum] != -1)
        return dp[i][sum];
    dp[i][sum]=0;
    for(int j = i ;j < n;j++)
        dp[i][sum] = (dp[i][sum] + solver(j,sum+A[j]))%modulo;
    return dp[i][sum];
}
int main()
{
    cin>>n>>x;
    memset(dp,-1,sizeof dp);
    for(int i=0;i < n;i++)
        cin>>A[i];
    cout<<solver(0,0)<<"\n";
}