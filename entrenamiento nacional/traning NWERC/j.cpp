#include <bits/stdc++.h>
using namespace std;
map<string,int>mapa1,mapa2,mapa3;
string aux;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,ans=0;
    cin>>n;
    for(int i=0;i < n;i++)
    {
        cin>>aux;
        mapa1[aux]++;
        mapa3[aux]=1;
    }
    for(int i=0;i < n;i++)
    {  
        cin>>aux;
        mapa2[aux]++;
        if(mapa3[aux]==1)
            mapa3[aux]=2;
    }
    for(auto i:mapa3)
        if(i.second==2)
        {
            ans+=min(mapa2[i.first],mapa1[i.first]);
        }
    cout<<ans<<"\n";
}