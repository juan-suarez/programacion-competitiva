#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    unsigned long long t,n,s,aux,ans;
    bool T[32];a
    cin>>t;
    s = 0;s = (1 << 5 )-1;
    while(t--)
    {
        memset(T,false,sizeof T);ans=0;
        cin>>n;
        n = (n << 32)|n;
        for(int i=0;i < 36;i++)
        {
            aux = (n>>i)&s;
            if(!T[aux])
            {
                ans++;
                T[aux] = 1;
            }
        }
        if(ans==32)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}