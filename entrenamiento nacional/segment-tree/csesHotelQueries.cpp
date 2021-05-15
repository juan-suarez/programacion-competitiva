#include <bits/stdc++.h>
using namespace std;
const int maxi = 2e5+1;
int H[maxi],st[maxi*4],n;
bool est;
void build(int pos,int b,int e)
{
    if(b==e)
        st[pos] = H[b];
    else
    {
        long long mid = (b+e)/2,l=pos*2,r = l+1;
        build(l,b,mid);build(r,mid+1,e);
        st[pos] = max(st[l],st[r]);
    }
}
void query(int pos,int b,int e,int q)
{
    if(st[pos] < q || (!est))
        return ;
    if(b==e)
    {
        cout<<b<<" ";
        st[pos]-=q;
        est = 0;
    }
    else
    {
        long long mid =  (b+e)/2,l = pos*2,r = l+1;
        query(l,b,mid,q);query(r,mid+1,e,q);
        st[pos] = max(st[l],st[r]);
    }
}
int main()
{
    int Q,q,ans;
    cin>>n>>Q;
    for(int i = 0;i < n;i++)
        cin >>H[i];
    build(1,0,n-1);
    for(int i = 0; i < Q;i++)
    {
        cin>>q;
        est=1;
        query(1,1,n,q);
        if(est)
            cout<<"0 ";
    }
    cout<<"\n";
}
