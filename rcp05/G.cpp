#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,ans=0;
    cin>>N;
    N = (N-2018) * 12 + 8;
    for(int i = 0;i <12;i++)
    {
        if((N-i)%26==0)
        {
            ans = 1;
            break;
        }
    }
    if(ans)
        cout<<"yes\n";
    else
    {
        cout<<"no\n";
    }
    
}