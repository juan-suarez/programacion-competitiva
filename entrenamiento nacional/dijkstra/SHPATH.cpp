#include <bits/stdc++.h>
#define pii pair<int ,int>
#define ll long long
using namespace std;
const int maxi = 1e4+5,inf = 1e9+8;
vector<vector<pii>>G(maxi);
int d[maxi];
map<string,int> mapa;
void dijkstra(int c)
{
    memset(d,inf,sizeof d);
    priority_queue<pii>cola;
    d[c] = 0;cola.push({0,c});
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
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,m,a,w,q;
    string name,name2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        // for(int i = 0; i <= n; i++)
        //     G[i].clear();
        for(int i=1;i <= n; i++)
        {
            cin>>name>>m;
            mapa[name] = i;
            while(m--)
            {
                cin>>a>>w;
                G[i].push_back({a,w});
            }
        }
        cin>>q;
        while(q--)
        {
            cin>>name>>name2;
            dijkstra(mapa[name]);
            cout<<d[mapa[name2]]<<"\n";
        }
    }
}