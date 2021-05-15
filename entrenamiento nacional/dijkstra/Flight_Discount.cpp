#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<ll  ,ll>
const ll maxi = 2e5+5,inf = 1e18;
vector<vector<pii>>G(maxi);
ll d[maxi];
void dijkstra(ll n)
{
    ll w,nw,u,v;
    fill(d,d+maxi,inf);
    priority_queue<pii>cola;
    d[2]=0;d[3]=0;
    cola.push({0,2});cola.push({0,3});
    while(!cola.empty())
    {
        u = cola.top().second;
        w = cola.top().first;
        cola.pop();
        if(-w!=d[u])continue;
        for(auto i:G[u])
        {
            v = i.first;
            nw = i.second - w;
            if(nw < d[v] )
            {
                d[v] = nw;
                cola.push({-nw,v});
            }
        }
    }
    cout<<min(d[n+1],d[n])<<"\n";
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,m;
    cin>>n>>m;
    int a,b,c;
    for(int i=0; i < m;i++)
    {
        cin>>a>>b>>c;
        a<<=1;b<<=1;
        G[a].push_back({b,c});
        G[a].push_back({b+1,c/2});
        G[a+1].push_back({b+1,c});
    }
    n<<=1;
    dijkstra(n);
}