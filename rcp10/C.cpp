#include <bits/stdc++.h>

using namespace std; 
vector<pair<int, pair<int, int> > > rect;
long long dp[100][100];
int base,n, a , b , c,aux,ans;
long long solver(int i,int ra,int rb)
{
    if(i > n ||(ra >= rect[i].first+rect[i].second.first || rb <= rect[i].first))
        return 0;
    if(dp[rect[i].first][rect[i].first+rect[i].second.first]!=-1)
        return dp[rect[i].first][rect[i].first+rect[i].second.first];
    dp[rect[i].first][rect[i].first+rect[i].second.first] = 0;
    for(int j = i;j < n;j++)
    {
        dp[rect[i].first][rect[i].first+rect[i].second.first] = max(dp[rect[i].first][rect[i].first+rect[i].second.first],
        rect[j].second.second + solver(j+1,rect[j].first,rect[j].second.first));
    }
    return dp[rect[i].first][rect[i].first+rect[i].second.first];

}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>base>>n;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        rect.push_back({c,{a,b}});
    }
    // ans=0;
    // for(int i = 0 ; i <= b;i++)
    // {
    //     aux=0;
    //     for(int j = 0;j < n ;j++)
    //     {
    //         if(!(i >= rect[j].first+rect[j].second.first || (i+1) <= rect[j].first))
    //             aux += rect[j].second.second;
    //     }
    //     ans = max(ans, aux);
    // }
    cout<<solver(0,0,10000)<<"\n";

}