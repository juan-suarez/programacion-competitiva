//https://codeforces.com/contest/872/problem/B

#include <bits/stdc++.h>

using namespace std;
const int maxi = 2e5+5,inf = 1e9+8;
int A[maxi],st[30][maxi];
void constructor(int n)
{
    for(int j=0; j < n; j++)
        st[0][j]=A[j];
    for(int i=1;i < 26;i++)
    {
        for(int j=0;j + (1 << i) <= n; j++)
            st[i][j] = min(st[i-1][j],st[i-1][j + (1 << (i-1))]);
    }
}
int query(int n,int l, int r)
{
    int large = r - l + 1,ans = inf;
    for(int i=0;large;i++)
    {
        if(large & 1)
        {
            ans = min(ans,st[i][l]);
            l+=1 << i;
        }
        large>>=1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,maxim = -inf,minim = inf;
    cin>>n>>k;
    for(int i=0;i < n;i++)
    {
        cin>>A[i];
        minim = min(minim, A[i]);
        maxim = max(maxim,A[i]);
    }
    if(k==1)
        cout<<minim<<"\n";
    if(k>2)
        cout<<maxim<<"\n";
    if(k==2)
    {
        constructor(n);
        int a = A[0], b = query(n,1,n-1),ans = max(a,b);
        for(int i=1; i < (n-1); i++)
        {
            a = min(a,A[i]);
            b = query(n,i+1,n-1);
            ans = max({ans,a,b});
        }
        cout<<ans<<"\n";
    }
}