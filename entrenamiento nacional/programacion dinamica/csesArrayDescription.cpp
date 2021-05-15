#include <bits/stdc++.h>
using namespace std;
int n,m,A[100005],dp[100005][105],ans;
const int modulo = 1e9+7;
int solver(int idx,int cur)
{
    if(A[idx]!=cur&&A[idx]!=0)
        return 0;
    if(idx==n-1)
        return 1;
    if(dp[idx][cur]!=-1)
        return dp[idx][cur];
    dp[idx][cur]=0;
    for(int i=-1;i <=1;i++)
    {
        if(cur+i<=m&&cur+i>0)
            dp[idx][cur] = (dp[idx][cur]+solver(idx+1,cur+i))%modulo;
    }
    return dp[idx][cur];
}
int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=1;i<=m;i++)
    {
        ans =(ans+solver(0,i))%modulo;
    }
    cout<<ans<<"\n";
}