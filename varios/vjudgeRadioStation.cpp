#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,b;
    string s,a,aux;
    map<string,string> sv;
    cin>>n>>k;
    for(int i = 0;i < n;i++)
    {
        cin>>s>>a;
        sv[a] = s;
    }
    for(int i=0;i < k;i++)
    {
        cin>>s>>a;
        aux = a.substr(0,a.size()-1);
        cout<<s<<" "<<a<<" #"<<sv[aux]<<"\n";
    }

}
