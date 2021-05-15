#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==0)
            cout<<(n&1)<<"\n";
        else
        {
            if(k>=n)
                cout<<k-n<<"\n";
            else
                cout<<abs((k&1)-(n&1))<<"\n";    
        }
           
    }
}