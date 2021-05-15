#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,l,r,mid=1,d1,d2;
    cin>>n;
    cout<<"1\n";cout.flush();
    cin>>d1;
    if(d1==0)
        cout<<"! "<<mid<<"\n";
    while(d1)
    {
        l = mid * 2; r = mid * 2 +1;
        cout<<l<<"\n";cout.flush();
        cin>>d2;
        if(d2==0)
        {
            cout<<"! "<<l<<"\n";
            break;
        }
        if(d2==2&&d1!=3)
        {
            cout<<"! "<<r<<"\n";
            break;
        }
        if(d2 > d1)
        {
            mid  = r;
            d1 = d2 - 2;
        }
        else
        {
            mid = l;
            d1  = d2;
        }
        
    }
}