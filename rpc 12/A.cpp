#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b ,c,ansa,ansb;
    cin>>a>>b>>c;
    ansa = a * b;
    ansb = a + (b*c);
    if(ansa==ansb)
        cout<<"0\n";
    if(ansa < ansb)
        cout<<"1\n";
    if(ansb < ansa)
        cout<<"2\n";
}