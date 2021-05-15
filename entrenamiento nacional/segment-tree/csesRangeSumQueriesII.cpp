#include <bits/stdc++.h>
using namespace std;
long long n,q,A[200001],st[800001];
void build(int pos,int b,int e)
{
    if(b==e)
        st[pos] = A[b];
    else
    {
        int mid = (b+e)/2, l = pos*2,r = l+1;
        build(l,b,mid);build(r,mid+1,e);
        st[pos] = st[l] + st[r];
    }
}
void actualizar(int pos,int b,int e,int k,int u)
{
    if(k < b || k > e)
        return;
    if(b==e)
    {
        if(b==k)
            st[pos] = u;
        else
            st[pos] = A[b];
    }
    else
    {
        int mid = (b+e)/2, l = pos*2,r = l+1;
        actualizar(l,b,mid,k,u);actualizar(r,mid+1,e,k,u);
        st[pos] = st[l] + st[r];
    }
}
long long query(int pos,int b,int e,int ql,int qr)
{
    if(qr < b || ql > e)
        return 0;
    if(b >= ql && qr >= e)
        return st[pos];
    long long mid = (b+e)/2,l = pos*2,r = l+1;
    return query(l,b,mid,ql,qr) + query(r,mid+1,e,ql,qr);
}
int main()
{
    int qr,ql,caso;
    cin>>n>>q;
    for(int i=0;i < n;i++)
        cin>>A[i];
    build(1,0,n-1);
    while(q--)
    {
        cin>>caso>>ql>>qr;
        if(caso==1)
            actualizar(1,1,n,ql,qr);
        else
            cout<<query(1,1,n,ql,qr)<<"\n";
    }

}