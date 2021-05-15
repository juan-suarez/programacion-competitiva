#include <bits/stdc++.h>
using namespace std;
long long n,d,A[2005],dp[2005][25];
const int inf = 1e9;
long long aprox(int a)
{
    if((a % 10) >= 5)
        return a + (10-(a%10));
    return a - (a%10);
}
long long solver(int x,int a,int sum)
{
    if(x > n)
        return 0;
    if(a==d)
        return aprox(A[n]-sum);
    if(dp[x][a]!=-1)
        return dp[x][a];
    dp[x][a]=inf;
    for(int i=x;i <= n;i++)
        dp[x][a] = min(dp[x][a],(aprox(A[i]-sum)+solver(i+1,a+1,A[i])));
    return dp[x][a];
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>d;
    memset(dp,-1,sizeof dp);A[0] = 0;
    for(int i=1;i <= n;i++)
    {   cin>>A[i];A[i] += A[i-1];}
    cout<<solver(0,0,0)<<"\n";
}