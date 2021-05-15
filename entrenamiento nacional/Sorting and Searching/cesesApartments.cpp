#include <bits/stdc++.h>
using namespace std;
int A[200000],B[200000],n,m,k,ans=0,a=0,b=0;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i < n;i++)
        cin>>A[i];
    sort(A,A+n);
    for(int i=0;i < m;i++)
        cin>>B[i];
    sort(B,B+m);
    while(a<n&&b<m)
    {
        if(A[a]-k<=B[b]&&A[a]+k>=B[b])
        {
            ans++;a++;b++;
        }
        else
        {
            if(A[a] > B[b])
                b++;
            else
                a++;
        }
    }
    cout<<ans<<"\n";
}