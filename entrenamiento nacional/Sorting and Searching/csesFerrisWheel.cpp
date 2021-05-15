#include <bits/stdc++.h>
using namespace std;
int A[200000],n,ans,i,j,w;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>w;
    for(int a=0;a < n;a++)
        cin>>A[a];
    i=0;j=n-1;
    sort(A,A+n);
    while(i<=j)
    {
        if(A[i]+A[j]<=w)
        {
            ans++;
            i++;j--;
        }
        else
        {
            ans++;j--;
        }   
    }
    cout<<ans<<"\n";
}