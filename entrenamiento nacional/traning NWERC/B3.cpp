#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g(10000),tri(10000);
int valores[460],a,b,ans = 0,n,m,p=0,aux,sum=0;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    while(cin>>n>>m)
    {
        for(int i=1;i <= n; i++)
            cin>>valores[i];
        for(int i=1;i <=m;i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        ans =0;p=1;
        for(int i=1;i <= n;i++)
            sort(g[i].begin(),g[i].end());
        for(int i = 1; i <= n;i++)
        {
            for(auto j:g[i])
            {
                ans = max(ans,valores[i]+valores[j]);
                for(auto f:g[i])
                {
                    if(f!=j)
                    {
                        if(binary_search(g[j].begin(),g[j].end(),f))
                        {
                            tri[p].push_back(i);tri[p].push_back(f);tri[p].push_back(j);
                            ans = max(ans,valores[i]+valores[f]+valores[j]);
                            p++;
                        }
                    }
                }
            }
        }
        for(int i=1; i <= n;i++)
        {
            for(int j=1;j < p;j++)
            {
                if(i!=tri[j][0]&&i!=tri[j][1]&&i!=tri[j][2])
                {
                    aux=0;sum=0;
                    for(int f:tri[j])
                    {
                        if(binary_search(g[i].begin(),g[i].end(),f))
                            aux++;
                        sum += valores[f]; 
                    }
                    if(aux==3)
                        ans = max(ans,valores[i]+sum);
                }
            }
        }
        cout<<ans<<"\n";
        for(int i=1;i < 10000;i++)
        {
            tri[i].clear();g[i].clear();
        }
          
    }

}