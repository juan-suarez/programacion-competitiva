#include <bits/stdc++.h>
using namespace std;
long long t,n,A[200009],ans,mini,maxi,k;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>A[0];
        mini=A[0];maxi=A[0];
        for(int i=1;i < n;i++)
        {
            cin>>A[i];
            mini = min(mini,A[i]);maxi= max(maxi,A[i]);
        }
        if(k&1)
            for(int i=0;i < n;i++)
                cout<<maxi-A[i]<<" ";
        else
            for(int i=0;i < n;i++)
                cout<<A[i]-mini<<" ";
        cout<<"\n";
    }
}