#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t,cant,ans,pos;
    string bs;
    vector<int>mov;
    cin>>t;
    while(t--)
    {
        cant=0;ans=0;
        cin>>bs;
        for(auto i:bs)
        {
            if(i=='1')
                cant++;
            else
            {
                if(cant)
                    mov.push_back(cant);
                cant=0;
            }   
        }
        if(cant)
            mov.push_back(cant);
        sort(mov.begin(),mov.end());
        for(int i=mov.size()-1;i >= 0;i-=2)
            ans += mov[i];
        cout<<ans<<"\n";
        mov.erase(mov.begin(),mov.end());
    }
}