#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,t,c,aux,taux,lado,ans[10000];
    string l;
    queue <pair<int,int>>left,right;
    cin>>c;
    while(c--)
    {
        cin>>n>>t>>m;
        for(int i=0;i < m;i++)
        {
            cin>>aux>>l;
            if(l=="right")
                right.push(make_pair(aux,i));
            else
                left.push(make_pair(aux,i));
        }
        if((left.front().first<=right.front().first&&!left.empty())||right.empty())
        {
            taux = left.front().first;lado = 0;
        }
        else
        {
            taux = right.front().first+t;lado = 1;
        }
        while(!left.empty()||!right.empty())
        {
            int mini,izq,der;
            if(lado==0)
            {
                lado=1;
                for(int i=0;i < n && !left.empty();i++)
                {
                    if(left.front().first>taux)
                        break;
                    ans[left.front().second] = taux+t;
                    left.pop();
                } 
            }
            else
            {
                lado=0;
                for(int i=0;i < n && !right.empty();i++)
                {
                    if(right.front().first>taux)
                        break;
                    ans[right.front().second] = taux+t;
                    right.pop();
                }
            }
            if(left.empty())
                izq = inf;
            else
                izq = left.front().first;
            if(right.empty())
                der = inf;
            else
                der = right.front().first;
            mini = min(izq,der);
            if(mini > taux+t)
                taux = mini;
            else
                taux+=t;
        }
        for(int i=0;i < m; i++)
            cout<<ans[i]<<"\n";
        if(c)
            cout<<"\n";
    }
}