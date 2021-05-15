#include <bits/stdc++.h>
using namespace std;
int t,n,A[200009],ans;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(int i=1;i <= n;i++)
        {
            cin>>A[i];
            if(A[i]==A[i-1])
                ans++;
        }
        if(ans == n-1)
            cout<<n<<"\n";
        else
            cout<<"1\n";
    }
}