#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
 
using namespace std; 
int digitos(int i,int c)
{
    int ans = 0;
    string aux;
    itoa(i,aux,10);
    
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int a,b,c;
    long long ans;
    cin>>a>>b>>ans;
    ans=0;
    for(int i=a;i <=b;i++)
    {
        ans+=digitos(i,c);
    }
}