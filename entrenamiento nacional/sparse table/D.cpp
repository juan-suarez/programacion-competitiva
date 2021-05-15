#include <bits/stdc++.h>

using namespace std;
const int maxi = 2e5+5,inf = 1e9+8;
long long A[maxi],st[30][maxi],lg[maxi+1];
map<long long,long long>ans;

void constructor(int n)
{
    lg[1] = 0;
    for(int i = 2;i <= maxi;i++)
        lg[i] = lg[i/2] + 1;
    for(int j=0; j < n;j++)
        st[0][j] = A[j];
    for(int i=1; i < 26; i++)
    {
        for(int j=0; j + (1 << i) <= n;j++)
            st[i][j] = __gcd(st[i-1][j],st[i-1][j+(1 << (i-1))]);
    }

}
long long query( int l,int r)
{
    int i = lg[r - l +1];
    return __gcd(st[i][l],st[i][r - (1 << i)+ 1]);
}
void solver(int n)
{
    constructor(n);
    for(int i = 0; i < n;i++)
    {
        int g = A[i],left = i;
        while(left < n)
        {
            int l = left,r = n-1;
            while(r - l > 1)
            {
                int m = (r + l) / 2 ;
                if(query(i,m) == g)
                    l = m;
                else
                    r = m;
            }
            //cout<<g<<" "<<l<<" "<<r<<"\n";
            ans[g]+=l-left+1;
            left = l+1;
            g = query(i,left);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,q;
    cin>>n;
    for(int i=0; i < n; i++)
        cin>>A[i];
    cin>>k;
    solver(n);
     while(k--)
    {
        cin>>q;
        cout<<ans[q]<<"\n";
    }
}