#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int aux,n,band;stack<int>pila,est;priority_queue<int>colap;
    while(cin>>n&&n!=0)
    {
        while(cin>>aux&&aux!=0)
        {
            band = 0;
            pila.push(aux);colap.push(aux);
            for(int i=0;i < n-1 ;i++)
            {cin>>aux;pila.push(aux);colap.push(aux);}
            while(!pila.empty())
            {
                while(!est.empty()&&est.top()==colap.top())
                {colap.pop();est.pop();}
                if(pila.top()==colap.top())
                    colap.pop();
                else
                    est.push(pila.top());
                pila.pop();
            }
            while(!est.empty())
            {
                if(est.top()!=colap.top())
                    band = 1;
                est.pop();colap.pop(); 
            }
            if(band)
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
        cout<<"\n";
    }
}
