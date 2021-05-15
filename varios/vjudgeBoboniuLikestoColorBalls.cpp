#include <bits/stdc++.h>
using namespace std;

int t,r,g,b,w,pares,impares,ceros;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>w;
        ceros = 0;
        impares = (r&1)+(g&1)+(b&1)+(w&1);
        pares = 4 -impares;
        if(r == 0)
            ceros++;
        if(g == 0)
            ceros++;
        if(b == 0)
            ceros++;
        if(w == 0)
            ceros++;
        if(pares==4)
        {
            cout<<"Yes\n";
            continue;
        }
        if(impares==3&&r>0&&g>0&&b>0)
        {
            cout<<"Yes\n";
            continue;
        }
        if(pares==3)
        {
            cout<<"Yes\n";
            continue;
        }
        if(impares==4)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}