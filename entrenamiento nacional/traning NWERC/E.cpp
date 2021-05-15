
#include <bits/stdc++.h>
using namespace std;
long double n,p,s,v,c1,c2,ans,aux=30,l=0,r=100,m2,m1;
long double fdex(long double c)
{
    return c1*pow(log2(n),(c*sqrt(2))) + c2 * (1+(1/c));
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>p>>s>>v;
    c1 = n/(p*1e9);c2 = s/v;
    cout<< fixed << setprecision(10);
    while(aux--)
    {
        m1 = l + (r-l)/3, m2 = r - (r-l) / 3;
        if(fdex(m1)<fdex(m2))
            r = m2;
        else
            l = m1; 
    }
    ans = (m2+m1)/2;
    cout<<fdex(ans)<<" "<<ans<<"\n";

}