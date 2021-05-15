#include <bits/stdc++.h>
using namespace std;
const int maxi = 2e5+1;
int C[maxi],st[maxi*4],n;
void build(int pos,int b,int e)
{
    if(b==e)
        st[pos] = 1;
    else
    {
        long long mid=(b+e)/2,l = pos*2,r = l+1;
        build(l,b,mid);build(r,mid+1,e);
        st[pos] = st[l]+st[r];
    }
}
void query(int pos,int b,int e,int q)
{   
    if(b==e)
    {
        cout<<C[b]<<" ";
        st[pos]=0;
    }
    else
    {
        long long mid=(b+e)/2,l = pos*2,r = l+1;
        if(st[l]>=q)
            query(l,b,mid,q);
        else
            query(r,mid+1,e,q-st[l]);
        st[pos] = st[l] + st[r];
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int Q,q,t;
    cout<<maxi<<"\n";
    cin>>t;
    n=t;
    for(int i=1;i <= n;i++)
        cin>>C[i];
    build(1,1,n);
    // for(int i=1;i<=n*2;i++)
    //     cout<<st[i]<<" ";
    // cout<<"\n";
    for(int i=0;i < t;i++)
    {
        cin>>q;
        query(1,1,t,q);
        n--;
    }
    cout<<"\n";
}