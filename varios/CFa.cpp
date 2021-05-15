#include <bits/stdc++.h>

using namespace std;
string aux = "abc"; 
void solve(int n)
{
    string ans="";
    int i=0;
    while(n--)
    {
        ans+=aux[i];
        i=(i+1)%3;
    }
    cout<<ans<<"\n";
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        solve(n);
    }
}