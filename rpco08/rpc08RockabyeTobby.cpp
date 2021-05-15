#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,t,c;
    char a;
    string aux;
    priority_queue<pair<int,int>> colap;
    map<int,int>mapa;
    map<int, string>mapa2;
    cin>>c;
    while(c--)
    {
        cin>>n>>k;
        for(int i=n;i > 0;i--)
        {
            cin>>aux>>t;
            colap.push(make_pair(t*-1,i));
            mapa[i] = t;
            mapa2[i] = aux;
        }
        for(int i=0;i < k;i++)
        {
            pair<int,int> r = colap.top(); 
            cout<<r.first*-1<<" "<<mapa2[r.second]<<"\n";
            colap.push(make_pair(r.first-mapa[r.second],r.second));
            colap.pop();
        }
        while(!colap.empty())
            colap.pop();
    }
}