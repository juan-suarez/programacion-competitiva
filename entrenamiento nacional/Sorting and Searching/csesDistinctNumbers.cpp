#include <bits/stdc++.h>
using namespace std;
int A[200000],n,ans=0;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i < n;i++)
        cin>>A[i];
    sort(A,A+n);
    for(int i=0; i < n;i = upper_bound(A,A+n,A[i])-A)
        ans++;
    cout<<ans<<"\n";
}