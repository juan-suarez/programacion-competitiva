#include <bits/stdc++.h>

using namespace std;
#define tam 100001
#define infinito 10001
int dp[tam],A[tam],n,k;
int solver(int index)
{
    if(dp[index] != -1)
        return dp[index];
    dp[index] = infinito;
    for(int j = 1 ; j <= k && index - j >= 0; j++)
    {
        if(dp[index-j] + abs(A[index]-A[index-j]) <  dp[index])
            dp[index] = solver(index-j) + abs(A[index]-A[index-j]);
    }
    return dp[index];
}
int main()
{
    cin>>n>>k;
    for(int i = 0;i < n;i++)
        cin>>A[i];
    memset(dp,-1,sizeof dp);
    dp[0]=0;
    cout<<solver(n-1)<<"\n";
    return 0;
}
