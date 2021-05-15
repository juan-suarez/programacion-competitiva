#include <bits/stdc++.h>
using namespace std;
long n,k,price[1000],pages[1000],dp[100000];
int main()
{
    cin>>n>>k;
    for(int i = 0;i < n;i++)
        cin>>price[i];
    for(int i = 0;i < n;i++)
        cin>>pages[i];
    for(int i=0;i < n;i++)
        for(int j=k;j>=price[i];j--)
            dp[j] = max(dp[j],dp[j-price[i]]+pages[i]);
    cout<<dp[k]<<"\n";
}