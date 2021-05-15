#include <bits/stdc++.h>
using namespace std;
int w,h,dp[501][501];
const int inf = 1e9; 
int main()
{
    cin>>w>>h;
    for(int i=1;i <=h; i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(i!=j)
            {
                dp[i][j] = inf;
                for(int k=1;k < j;k++)
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
                for(int k=1;k < i;k++)
                    dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
            }
        }
    }
    cout<<dp[h][w]<<"\n";
}