#include <bits/stdc++.h>
using namespace std;
int n,A[16];
int solver(int i,int valor)
{
    if(i==n&&!valor)
        return 0;
    if(i==n)
        return 1;
    return min(solver(i+1,(valor+A[i])%360),solver(i+1,(valor-A[i])%360));
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i < n;i++)
        cin>>A[i];
    cout<<(solver(0,0)?"NO\n":"YES\n");
}