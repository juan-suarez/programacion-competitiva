#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans = abs(a-b)/10;
        if(abs(a-b)%10 > 0)
            cout<<ans+1<<"\n";
        else
            cout<<ans<<"\n";

    }
}