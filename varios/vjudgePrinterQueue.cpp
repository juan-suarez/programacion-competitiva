#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,m,aux,ans;
    queue<int>cola;priority_queue<int>colap;
    cin>>t;
    while(t--)
    {
        while(!cola.empty())
            cola.pop();
        while(!colap.empty())
            colap.pop();
        ans=0;
        cin>>n>>m;
        for(int i=0; i < n;i++)
        {
            cin>>aux;cola.push(aux);colap.push(aux);
        }
        while(!cola.empty())
        {
            if(m==0&&cola.front()==colap.top())
            {
                ans++;break;
            }
            if(cola.front()==colap.top())
            {
                m--;ans++;cola.pop();colap.pop();
            }
            else
            {
                if(m==0)
                {
                    m=cola.size()-1;aux=cola.front();cola.push(aux);cola.pop();
                }
                else
                {
                    m--;aux=cola.front();cola.push(aux);cola.pop();
                }
            }
        }
        cout<<ans<<"\n";
    }
}