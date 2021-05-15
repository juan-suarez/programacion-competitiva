#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
const int inf  = 1e9+8,maxi = 2e6+5;
int pi[maxi];
void kmp(string s)
{
    int n = s.length();
    for(int i=1; i < n;i++)
    {
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j])
            j = pi[j-1];
        if(s[i] == s[j])
            j++;
        pi[i] = j;
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    string s,p;
    cin>>t;
    while(t--)
    {
        cin>>s>>p;
        kmp(p+'#'+s);
        for(int i=0; i < s.length()+p.length()+1; i++)
            cout<<pi[i]<<" ";
        cout<<"\n";
    }
}