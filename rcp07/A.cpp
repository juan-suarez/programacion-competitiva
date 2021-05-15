#include <bits/stdc++.h>

using namespace std;
int main()
{
    int A,ans=0;
    cin>>A;
    ans=(A/3)*7;
    if(A%3==1)
        ans=ans-3;
    if(A%3==2)
        ans++;
    if(A<=1)
        ans=0;
    cout<<ans<<"\n";


}