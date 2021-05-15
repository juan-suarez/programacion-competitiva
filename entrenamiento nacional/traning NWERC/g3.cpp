#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long ab,ac,bd,num,div,d;
    while(cin>>ab>>ac>>bd)
    {
        num = ab*ac;div = bd-ac;
        d = __gcd(num,div);
        cout<<num/d<<"/"<<div/d<<"\n";
    }

}