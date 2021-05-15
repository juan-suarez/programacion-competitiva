#include<bits/stdc++.h>
using namespace std;
map<char,int> frecl;
map<string,int> pal;
string A;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,ans=0,aux=0;
    cin>>n;
    while(n--)
    {
        cin>>A;
        frecl[A[0]]++;
        pal[A]++;
    }
    for(auto i: frecl)
    {
        ans+= ((i.second*(i.second-1)));
        for(auto j:pal)
        {
            if(j.first[0] > i.first)
                break;
            if(j.first[0] < i.first)
                continue;
            aux = pal[j.first];
            ans =ans - ((aux*(aux-1)));
        }
    }
    cout<<ans<<"\n";
}
