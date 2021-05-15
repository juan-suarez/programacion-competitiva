#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    queue<long long> entrn,entrm;
    priority_queue<long long>colap,colaux;
    long long i,t,n,m,aux;
    const long long con = -1e12;
    cin>>t;
    while(t--)
    {
        i=0;
        cin>>n>>m;
        for(int j=0;j < n;j++)
        {cin>>aux;entrn.push(aux);}
        for(int j=0;j < m;j++)
        {cin>>aux;entrm.push(aux);}
        colaux.push(con);
        for(int j=1;j <= n;j++)
        {
            if(colap.empty())
                colap.push(entrn.front());
            else
            {
                if(entrn.front()>=colap.top())
                    colaux.push(entrn.front()*-1);
                else
                {colaux.push(colap.top()*-1);colap.pop();colap.push(entrn.front());}
            }
            entrn.pop();
            while(j==entrm.front()&&!entrm.empty())
            {
                cout<<colap.top()<<"\n";
                colap.push(colaux.top()*-1);colaux.pop();
                entrm.pop();
            }
        }
        while(!colap.empty())
            colap.pop();
        while(!colaux.empty())
            colaux.pop();
        if(t)
            cout<<"\n";
    }
}
