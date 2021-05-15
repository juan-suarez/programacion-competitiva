#include <bits/stdc++.h>
using namespace std;
int n,t,quimica[16][16],dp[1<<16];
int solver(int mask)
{
    int index=__builtin_popcount(mask);
    if(index==n)
        return 0;
    if(dp[mask]!=-1)
        return dp[mask];
    dp[mask]=0;
    for(int i=0;i < n;i++)
    {
        if(!((mask>>i)&1))
            dp[mask]=max(dp[mask],quimica[index][i]+solver(mask|(1<<i)));
    }
    return dp[mask];

}
int main()
{
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        memset(dp,-1,sizeof dp);
        cin>>n;
        for(int a=0;a<n;a++)
        {
            for (int b = 0; b < n; b++)
                cin>>quimica[a][b];
        }
        cout<<"Case "<<i+1<<": "<<solver(0)<<"\n";
    }
    
}