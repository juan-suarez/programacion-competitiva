#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k, V[100],aux,ans=0;
    cin>>n>>k;
    for(int i=0;i < n;i++)
        cin>>V[i];
    aux = V[k-1];
    sort(V,V+n);
    for(int i=0;i < n;i++)
        if(V[i] > 0 && V[i] >= aux)
            ans++;
    cout<<ans<<"\n";
}