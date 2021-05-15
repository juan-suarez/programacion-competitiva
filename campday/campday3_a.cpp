#include <bits/stdc++.h>

using namespace std;
#define tam 100001
int dp[tam],A[tam],n,pr=0;
int solver(int index)
{
    if(dp[index] != -1)
        return dp[index];
    if(index <= 1)
        return dp[index] = abs(A[0]-A[index]);
    return dp[index] = min(solver(index-1) + abs(A[index]-A[index-1]),
    solver(index-2) + abs(A[index]-A[index-2]));
}
int main()
{
    cin>>n;
    for(int i = 0;i < n;i++)
        cin>>A[i];
    memset(dp,-1,sizeof dp);
    dp[0] = 0; 
    cout<<solver(n-1)<<"\n";
    return 0;
}
