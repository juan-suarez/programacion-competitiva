#include<bits/stdc++.h>
using namespace std;
int n,a,b,val=1,curr;
queue<int>cola;
vector<vector<int>> g(2e5);
bool usados[20000];
int ans[20005][2];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=1;i < n;i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cola.push(1);usados[1]=1;
    while(!cola.empty()&&n!=2)
    {
        curr = cola.front();cola.pop();
        for(auto i:g[curr])
        {
            if(!usados[i])
            {
                cola.push(i);usados[i] = 1;
                if(ans[curr][0]==0)
                {
                    ans[i][0] = val;
                    ans[curr][0] = val;
                    val++;
                }
                else
                {
                    if(ans[curr][1]==0)
                    {
                        ans[i][0] = val;
                        ans[curr][1] = val;
                        val++;
                    }
                    else
                        ans[i][0] = ans[curr][0];
                }
            }
        }
    }
    if(n==2)
    {
        ans[1][0] = 1;
        ans[1][1] = 2;
        ans[2][0] = 1;
        ans[2][1] = 2;
    }
    for(int i=1 ; i <= n;i++)
    {
        if(ans[i][1]== 0)
        {
            ans[i][1] = val++;
        }
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
}