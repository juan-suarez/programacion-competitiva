#include <bits/stdc++.h>
using namespace std;
long long n,q,A[200001],st[800001],caso,u;
void build(int pos,int b,int e)
{
    if(b==e)
        st[pos] = A[b];
    else
    {
        int mid = (b+e)/2, l = pos*2,r = l+1;
        build(l,b,mid);build(r,mid+1,e);
    }
}
void update(int pos,int b,int e,int ql,int qr,int u)
{
    if(qr < b || ql > e)
        return;
    if(b >= ql && qr >= e)
        st[pos]+=u;
    else
    {
        long long mid = (b+e)/2,l = pos*2,r = l+1;
        update(l,b,mid,ql,qr,u);update(r,mid+1,e,ql,qr,u);
    }
}
long long query(int pos,int b,int e,int k)
{
    if(k < b || k > e)
        return 0;
    if(b==e && b==k)
        return st[pos];
    long long mid = (b+e)/2,l = pos*2,r = l+1;
    return  st[pos] + query(l,b,mid,k) + query(r,mid+1,e,k);
}
int main()
{
    int qr,ql;
    cin>>n>>q;
    for(int i=0;i < n;i++)
        cin>>A[i];
    build(1,0,n-1);
    while(q--)
    {
        cin>>caso>>ql;
        if(caso==1)
        {
            cin>>qr>>u;
            update(1,1,n,ql,qr,u);
        }
        else
            cout<<query(1,1,n,ql)<<"\n";
    }

}