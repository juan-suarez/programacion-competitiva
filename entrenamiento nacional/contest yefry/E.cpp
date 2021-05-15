#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
const int inf  = 1e9+8,maxi = 1e5+5;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(min({a,b,c}) >= (a+b+c)/9 && (a+b+c)%9==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
