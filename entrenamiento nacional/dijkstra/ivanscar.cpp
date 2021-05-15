#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<int  ,int>
const ll maxi = 1e5+5,inf = 1e9+8;
vector<vector<pii>>G(maxi);
int d[maxi];
void djkstra(int in,int fin)
{
    memset(d,inf,sizeof d);
    priority_queue<pii>cola;
    d[in] = 0;d[in+1]=0;
    cola.push({0,in});cola.push({0,in+1});
    while(!cola.empty())
    {
        int u = cola.top().second;
        int w = cola.top().first;
        cola.pop();
        for(auto i:G[u])
        {
            int v = i.first;
            int nw = i.second - w;
            if(nw < d[v] )
            {
                d[v] = nw;
                cola.push({-nw,v});
            }
        }
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        cin>>a>>b;
        a<<=1;b<<=1;
        G[a].push_back({b,0});
        G[a+1].push_back({b,1});
        G[b].push_back({a+1,1});
        G[b+1].push_back({a+1,0});
    }
    cin>>a>>b;
    djkstra((a<<1),(b<<1));
    cout<<min(d[b<<1],d[(b<<1)+1])<<"\n";
}