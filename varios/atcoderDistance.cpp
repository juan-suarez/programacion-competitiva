#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,maxi,x,y,ans=0,aux;
    cin>>n>>maxi;
    maxi*=maxi;
    while(n--)
    {
        cin>>x>>y;
        aux = (x*x) + (y*y);
        if(aux<=maxi)
            ans++;
    }
    cout<<ans<<"\n";
}