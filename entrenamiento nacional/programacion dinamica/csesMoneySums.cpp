#include <bits/stdc++.h>
using namespace std;
int n,dp[101][100000],A[1001],sum,aux;
vector<int> ans;
int solver(int i, int sum)
{
    if(dp[i][sum]==0)
        return dp[i][sum] = 1;
    for(int k=i+1;k < n;k++)
       dp[i][sum] = solver(k,sum+A[k-1]);
    return 1;
}
int main()
{
    cin>>n;
    for(int i=0;i < n;i++)
        cin>>A[i];
    solver(0,A[0]);
    
    cout<<"\n";
}