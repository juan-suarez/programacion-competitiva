#include <bits/stdc++.h>
using namespace std;
long t,n,w,k,x,y,dusts[100],gancho,dp[100][100];
cin>>t;
int solver(long idx,long k)
{
    if(k<1||idx==n)
        return 0;
    if(dp[idx][k]!=-1)
        return dp[idx][k];
    int ans=0;

    return ans = 

}
int main()
{
    for(int i=0;i<t;i++)
    {
        memset(dp,-1,100);
        cin>>n>>w>>k;
        for(int j=0;j < n;j++)
            cin>>gancho>>dusts[j];
        sort(dusts,dusts+n);
        cout<<"Case "<<i+1<<": "<<solver(0,k)"\n";
    }
}