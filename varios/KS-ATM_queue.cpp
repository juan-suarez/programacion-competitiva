#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,x,aux;
    vector<pair<int ,int>>datos;
    cin>>t;
    for(int i=1; i <= t;i++)
    {
        cin>>n>>x;
        cout<<"Case #"<<i<<": ";
        for(int j = 1; j <= n;j++)
        {
            cin>>aux;
            datos.push_back({aux/x,j});
        }
        sort(datos.begin(),datos.end());
        for(auto j: datos)
            cout<<j.second<<" ";
        datos.clear();
        cout<<"\n";    
    }
}   