#include <bits/stdc++.h>
using namespace std;
long long n,q,A[200001],st[800001];
const int inf = 1e9;
void build(int pos,int b,int e)
{
    if(b==e)
        st[pos] = A[b];
    else
    {
        int mid = (b+e)/2, l = pos*2,r = l+1;
        build(l,b,mid);build(r,mid+1,e);
        st[pos] = min(st[l] ,st[r]);
    }
}
long long query(int pos,int b,int e,int ql,int qr)
{
    if(qr < b || ql > e)
        return inf;
    if(b >= ql && qr >= e)
        return st[pos];
    long long mid = (b+e)/2,l = pos*2,r = l+1;
    return min( query(l,b,mid,ql,qr) , query(r,mid+1,e,ql,qr));
}
int main()
{
    int qr,ql;
    cin>>n>>q;
    for(int i=0;i < n;i++)
        cin>>A[i];
    build(1,0,n-1);
    // for(int i = 0; i < n;i++)
    //     cout<<st[i]<<" ";
    // cout<<"\n";
    while(q--)
    {
        cin>>ql>>qr;
        cout<<query(1,1,n,ql,qr)<<"\n";
    }

}