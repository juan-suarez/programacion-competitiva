#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
const int inf  = 1e9+8,maxi = 2e6+5;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,Q,q,x;
    stack<int> pila;
    map<int,int>mapa;
    set<int>conj;
    cin>>t;
    while(t--)
    {
        cin>>Q;
        while(Q--)
        {
            cin>>q;
            if(q==1)
            {
                cin>>x;
                pila.push(x);
                mapa[x]++;
                conj.insert(x);
            }
            if(q==2&&(!pila.empty()))
            {
                int n = pila.top();pila.pop();
                mapa[n]--;
                if(!mapa[n])
                    conj.erase(n);
            }
            if(q==3)
            {
                if(pila.empty())
                    cout<<"Empty!\n";
                else
                {
                    auto it = conj.end();
                    it--;
                    cout<<abs(*conj.begin()-*it)<<"\n";
                }
            }
        }
        conj.clear();mapa.clear();
        while(!pila.empty())
            pila.pop();
    }
}