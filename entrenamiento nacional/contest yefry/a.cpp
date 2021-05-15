#include <bits/stdc++.h>
#define ll long long 
#define pii pair<int ,int>
using namespace std;
const int inf = 1e9,maxi = 1e5+5;
int B[35];
int Bb(int x)
{
    int l = 0,r = 31,m = (r+l)/2;
    while(r - l > 1)
    {
        if(x == B[m])
            return m;
        if(x > B[m])
            l = m;
        else
            r = m;
        m = (r+l)/2; 
    }
    return m;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,A[55];
    cin>>t;
    for(int i=0,b = 1; i < 31; i++,b<<=1)
        B[i] = b;
    while(t--)
    {
        cin>>n;
        for(int i=0; i < n;i++)
            cin>>A[i];
        for(int i=0; i < n; i++)
            A[i] = B[Bb(A[i])];
        for(int i=0; i < n;i++)
            cout<<A[i]<<" ";
        cout<<"\n";
    }
    return 0;
}