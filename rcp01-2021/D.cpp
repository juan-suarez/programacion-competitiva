#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
const ll inf  = 1e9+8,maxi = 2e6+5,mod = 2147483647;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    ll t,fibbo[10005],n;
    fibbo[0]=0;fibbo[1]=1;
    for(int i=2; i < 10001;i++)
        fibbo[i] = (fibbo[i-1] + fibbo[i-2])%mod;
    sort(fibbo,fibbo+10000);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(binary_search(fibbo,fibbo+10000,n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}