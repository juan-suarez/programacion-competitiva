#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,r,ans=0,i=0,j=0;
    string m;
    cin>>n;
    cin>>m;
    if(m[0]=='R')
        r=1;
    else
        r=2;
    for(int a=0;a < n-1;a++)
    {
        if(m[a]=='R')
            j++;
        else
            i++;
        if(i==j)
        {
            if(r==1&&m[a+1]=='U')
            {
                 ans++;r=2;
            }
            if(r==2&&m[a+1]=='R')
            {
                ans++;r=1;
            }
        }
    }
    cout<<ans<<"\n";
}
