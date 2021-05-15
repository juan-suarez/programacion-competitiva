#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
const int inf  = 1e9+8,maxi = 2e6+5;
int pi[maxi];
void kmp(string s)
{
    int n = s.length();
    for(int j=1;j < n;j++)
    {
        int i = pi[j-1];
        while(i > 0 && s[i] != s[j])
            i = pi[i-1];
        if(s[i]==s[j])
            i++;
        pi[j] = i;
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    set<int> ans;
    string s;
    cin>>s;
    kmp(s);
    int n=s.length();
    while(pi[n-1]!=0)
    {
        ans.insert(pi[n-1]);
        n = pi[n-1];
    }
    for(auto i:ans)
        cout<<i<<" ";
    cout<<"\n";
}