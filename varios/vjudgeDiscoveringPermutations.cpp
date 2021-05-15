#include <bits/stdc++.h>
using namespace std;
int t,n,k,cant;
string abc = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
void solver(int i,string A)
{
    if(cant==k)
        return;
    if(A.size()==n)
    {
        cout<<A<<"\n";
        cant++;
        return;
    }
    for(int j=i;j < n;j++)
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    for(int f=1;f <= t;f++)
    {
        cin>>n>>k;
        cant=0;
        cout<<"Case "<<f<<":\n";
        solver(0,"");
    }
}