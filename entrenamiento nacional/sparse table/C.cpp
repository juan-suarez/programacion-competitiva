#include <bits/stdc++.h>

using namespace std;

const int maxi = 1e6+5,inf = 1e9+8;
string A;
long long B[maxi],ans[maxi];
// void constructor1(int n)
// {
//     for(int i=0; i < n;i++)
//     {
//         if(A[i]=='(')
//             st[0][i] = 1;
//         else
//             st[0][i] = 0;
//     }
//     for(int i = 1; i < n;i++)
//     {
//         for(int j = 0; j +(1 << i) <= n;j++)
//             st[i][j] = st[i-1][j] + st[i-1][j + (1<<(i-1))];
//     }
// }
void constructor2(int n)
{
    for(int i=1;i < n;i++)
    {
        if(A[i] == '(')
            B[i] = 0;
        else
        {
            if(B[i-1] == 0 && A[i-1]=='(')
                B[i] = 2 + B[i-2];
            else if(A[i-B[i-1]-1]=='(' && i-B[i-1] > 0)
                B[i] = B[i-1] + 2 + B[i-B[i-1]-2];
        }
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    long long maxim = 0;
    cin>>A;
    constructor2(A.length());
    for(int i =0; i < A.length();i++)
    {
        maxim = max(maxim,B[i]);
        ans[B[i]]++;
    }
    if(maxim==0)
        cout<<"0 1\n";
    else
        cout<<maxim<<" "<<ans[maxim]<<"\n";    
}