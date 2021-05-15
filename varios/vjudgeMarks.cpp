#include <bits/stdc++.h>
using namespace std;
int n,m,ex[101],maxi,ans=0;
queue<int>cola;
string aux,gb[100];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i < n;i++)
        cin>>gb[i];
    for(int i=0;i < m;i++)
    {
        maxi=0;
        for(int j=0; j < n;j++)
        {
            if(gb[j][i]-'0'==maxi)
                cola.push(j);
            if(gb[j][i]-'0'>maxi)
            {
                while(!cola.empty())
                    cola.pop();
                 cola.push(j);
                 maxi=gb[j][i]-'0';
            }
        }
        while(!cola.empty())
        {
            ex[cola.front()] = 1;
            cola.pop();
        }
    }
    for(int i=0;i < n;i++)
        if(ex[i])
            ans++;
    cout<<ans<<"\n";
}

