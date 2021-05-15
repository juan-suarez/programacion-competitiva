#include <bits/stdc++.h>
using namespace std;
int n,dp[7][1000001];
const int modulo = 1e9+7;
long long solver(int i ,int sum)
{
    if(sum > n)
        return 0;
    if(sum==n)
        return 1;
    if(dp[i][sum] != -1)
        return dp[i][sum];
    dp[i][sum]=0;
    for(int j = 1 ;j <= 6;j++)
        dp[i][sum] = (dp[i][sum] + solver(j,sum+j))%modulo;
    return dp[i][sum];
}
int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    cout<<solver(0,0)<<"\n";
}
