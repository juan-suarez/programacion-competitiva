#include <bits/stdc++.h>
using namespace std;
const int maxi = 1e5 + 5;
int pos[maxi][27];
char perm[maxi][27];
int dp[maxi][27];
bool checker(int i,int j,int n)
{
    for(int x=1; x <= n; x++)
        if(pos[x][i]>=pos[x][j])
            return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1; i <= n;i++)
    {
        for(int j=1; j <= m;j++)
        {
            cin>>perm[i][j];
            pos[i][perm[i][j]-'A'+1] = j;
        }
    }
    bool a = checker(8,3,n);
    for(int i=1;i <= m;i++)
    {
        for(int j=1; j <= m;j++)
        {
            if(i==j)
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            else if(checker(i,j,n))
                dp[i][j] = dp[i][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<(dp[m][m]==1?2:dp[m][m])<< "\n";
}