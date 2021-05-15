#include <bits/stdc++.h>

using namespace std;
int T,N,aux,dp[200][200];
vector <vector<int>> diamante(200);
int solver(int y, int x)
{
    if(x>=diamante[y].size()||x<0)
        return 0;
    if(y==(N*2)-1)
        return diamante[y][x];
    if(dp[y][x]!=-1)
        return dp[y][x];
    if(y<N)
        return dp[y][x]=max(diamante[y][x]+solver(y+1,x),diamante[y][x]+solver(y+1,x+1));
    else
        return dp[y][x]=max(diamante[y][x]+solver(y+1,x),diamante[y][x]+solver(y+1,x-1));
}
int main()
{
    cin>>T;
    for(int m=1;m<=T;m++)
    {
        for(int i=0;i < 200;i++)
            diamante[i].clear();
        memset(dp,-1,sizeof dp);
        cin>>N;
        for(int i=1;i<=N*2-1;i++)
        {
            if(i< N)
            {
                for(int j=0;j<i;j++)
                {
                    cin>>aux;
                    diamante[i].push_back(aux);
                }
            }
            else
            {
                for(int r=N-(i-N);r >0;r--)
                {
                    cin>>aux;
                    diamante[i].push_back(aux);
                }
            }
        }
        cout<<"Case "<<m<<": "<<solver(1,0)<<"\n";
    }
}