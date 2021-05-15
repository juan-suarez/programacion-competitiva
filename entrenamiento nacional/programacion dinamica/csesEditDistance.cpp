#include <bits/stdc++.h>
using namespace std;
long long t,tam,dp[5001][5001];
string A,B,aux;
//recursivo
int solver(int i,int j)
{
    if(A[i]=='\0'||B[j]=='\0')
        return (A.size()-i)+(B.size()-j);
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(A[i]==B[j])
        return dp[i][j]=solver(i+1,j+1);
    return dp[i][j] = min({1+solver(i+1,j+1),1+solver(i+1,j),1+solver(i,j+1)});
}
int main()
{
    //memset(dp,-1,sizeof dp);
    cin>>A>>B;
    dp[0][0]=0;
    //iterativo
    for(int i=1;i<=A.size();i++)
        dp[i][0]=dp[i-1][0]+1;
    for(int i=1;i<=B.size();i++)
        dp[0][i]=dp[0][i-1]+1;
    for(int i=1;i<=A.size();i++)
        for(int j=1;j<=B.size();j++)
        {
            if(A[i-1]==B[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min({dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1]+1});
        }
    cout<<dp[A.size()][B.size()]<<"\n";
}