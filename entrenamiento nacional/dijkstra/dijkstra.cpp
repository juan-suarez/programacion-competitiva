#include <bits/stdc++.h>
#define pii pair<int ,int>
#define ll long long
using namespace std;
const int maxi = 1e5+5,inf = 1e9+8;
vector<vector<pii>>G(maxi);
int d[maxi],p[maxi];
void dijkstra(int s)
{
    memset(d,inf,sizeof d);
    memset(p,0,sizeof p);
    queue<int>cola;
    d[s] = 0;cola.push(s);
    while(!cola.empty())
    {
        int u = cola.front();
        for(auto i:G[u])
        {
            int v = i.first;
            int nw = i.second + G[u][v].second;
            if(nw < d[v] )
            {
                p[v] = u;
                d[v] = nw;
                if(p[v])
                    cola.push(v);
            }
        }
    }
}
int main()
{
    int n,a,b,w,m,s;
    char l,f;
    cin>>n>>m>>s;
    for(int i=0; i < m;i++)
    {
        cin>>l>>f>>w;
        a = l-'a'+ 1;b = f -'a'+1;
        G[a].push_back({b,w});
        G[b].push_back({a,w});
    }
    dijkstra(s);
    int u=n;
    cout<<d[7]<<"\n";
    
}