#include <bits/stdc++.h>

using namespace std;
const int maxi = 2e5+5,inf = 1e9+8;
long long A[maxi],st[30][maxi];
void constructor(long long n)
{
    for(int j=0;j < n;j++)
        st[0][j] = A[j];
    for(int i=1; i < 26; i++)
    {
        for(int j = 0; j + (1 << i) <= n;j++)
        {
            st[i][j] = st[i-1][j] + st[i-1][j + (1 << (i-1))];
        }
    }
}
int main()
{
    long long n,q,r,l;
    cin>>n>>q;
    for(int i=0; i < n;i++)
        cin>>A[i];
    constructor(n);
    while(q--)
    {
        cin>>l>>r;
        r--;l--;
        long long large = r - l+1,ans=0;
        for(int i = 0;large;i++)
        {
            if(large & 1)
            {
                ans += st[i][l];
                l += 1 << i;
            }
            large >>=1;
        }
        cout<<ans<<"\n";
    }
    
}