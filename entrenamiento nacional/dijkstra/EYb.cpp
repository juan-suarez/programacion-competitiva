#include <bits/stdc++.h>
#define ll long long 
#define pii pair<int ,int>
using namespace std;
const int inf = 1e9,maxi = 1e5+5;
pii pos[105];
int d[105];
vector<vector<int>>G(maxi);
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,k,ans=0;
    cin>>t;
    while(t--)
    {
        for(int i=0; i < 105;i++)
            G[i].clear();
        ans=0;
        cin>>n>>k;
        int x,y;
        for(int i=0; i < n;i++)
        {
            cin>>x>>y;
            pos[i]={x,y};
        }
        for(int i=0; i < n-1;i++)
        {
            for(int j = i+1; j < n;j++)
            {
                if(abs(pos[i].first-pos[j].first)+abs(pos[i].second-pos[j].second)<=k)
                {
                    G[i].push_back(j);
                    G[j].push_back(i);
                }
            }
        }
        fill(d,d+105,inf);
        queue<int>cola;
        d[0] = 0;cola.push(0);
        for(auto i:G)
            if(i.size()==n-1)
                ans = 1;
        if(ans)
            cout<<"1\n";
        else
            cout<<"-1\n";
    }
}