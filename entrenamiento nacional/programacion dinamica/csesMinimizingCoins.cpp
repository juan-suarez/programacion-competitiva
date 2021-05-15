#include <bits/stdc++.h>
using namespace std;
int n,x,A[101],dp[1000001],ans;
const int modulo = 1e9+7,inf = 1e9;
int solver(int sum)
{
    if(sum > x)
        return inf;
    if(sum==x)
        return 0;
    if(dp[sum] != -1)
        return dp[sum];
    dp[sum]=inf;
    for(int j = 0 ;j < n;j++)
        dp[sum] = min(dp[sum] ,1 + solver(sum+A[j]));
    return dp[sum];
}
int main()
{
    cin>>n>>x;
    memset(dp,-1,sizeof dp);
    for(int i=0;i < n;i++)
        cin>>A[i];
    ans = solver(0);
    if(ans==inf)
        cout<<"-1\n";
    else
        cout<<ans<<"\n";
}