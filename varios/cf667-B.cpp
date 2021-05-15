#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long t,a,b,x,y,n,aux;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        if((a + x) > (b+y)||((a+x)==(b+y) && a > b))
        {
            aux = a;a = b;b = aux;aux = x;x = y;y = aux;
        }
        if( a - n < x)
        {
            n-= (a - x);
            a = x;
        }
        else
        {
            a -= n;
            n = 0;
        }
        if(b - n < y)
            b = y;
        else
            b-=n;
        
        cout<<a*b<<"\n";
    }
}