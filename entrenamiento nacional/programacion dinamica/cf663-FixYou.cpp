//https://codeforces.com/contest/1391/problem/B
#include <bits/stdc++.h>
using namespace std;
int a,b,cb[101][101],dp[101][101],t;
string aux;
const int inf = 1e9;
int solver(int i,int j)
{
    
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(int i=0;i < a;i++)
        {
            cin>>aux;
            cb[i]=aux;
        }
        cout<<solver(0,0)<<"\n";
    }
}