#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,A[50000],band,aux;
    cin>>t;
    while(t--)
    {
        band=0;
        cin>>n;
        for(int i=1;i <= n;i++)
            cin>>A[i];
        for(int i=1;i < n-1;i++)
        {
            aux = (upper_bound(A,A+n,A[i]+A[i+1])-A);
            if(A[aux]-(A[i]+A[i+1])>=0)
            {
                band=1;
                cout<<i<<" "<<i+1<<" "<<aux<<"\n";
                break;
            }
        }
        if(!band)
            cout<<"-1\n";
    }
}
