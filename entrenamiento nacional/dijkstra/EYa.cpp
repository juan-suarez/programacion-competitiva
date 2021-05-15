#include <bits/stdc++.h>
#define ll long long 
#define pll pair<ll ,ll>
using namespace std;
const int inf = 1e9+8;

string solve(int n,char a)
{
    string ans="";
    while(n--)
        ans+=a;
    return ans;
}
int main(){
    int t,n;
    map<char,int>mapa;
    string A,B="trygub",ans="";
    cin>>t;
    while(t--)
    {
        ans = "";
        int j=0;
        cin>>n>>A;
        for(int i=0; i < n; i++)
        {
            int band = 1;
            for(auto k:B)
            {
                if(k == A[i])
                {
                    mapa[A[i]]++;
                    band=0;
                }
            }
            if(band)
                ans+=A[i];  
        }
        if(mapa.size() < 6)
            cout<<A<<"\n";
        else
        {
            for(auto i:mapa)
                ans+=solve(i.second,i.first);
            cout<<ans<<"\n";
        }
        mapa.clear();
    }
}