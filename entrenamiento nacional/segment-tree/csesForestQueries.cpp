#include <bits/stdc++.h>
using namespace std;
int x[1001][1001];
int n,q,cx1,cx2,cy1,cy2,ans;
char forest[1001][1001];

int main()
{
    cin>>n>>q;
    for(int i=1;i <= n;i++)
        for(int j=1;j <=n;j++)
            cin>>forest[i][j];
    for(int i=1;i <=n;i++)
        for (int j = 1; j <= n; j++)
        {
            x[i][j] = x[i-1][j] + x[i][j-1] -x[i-1][j-1];
            if(forest[i][j]=='*')
                x[i][j]++;
        }
    while(q--)
    {
        cin>>cy1>>cx1>>cy2>>cx2;
        ans = x[cy2][cx2] + x[cy1-1][cx1-1] -x[cy2][cx1-1] - x[cy1-1][cx2];
        cout<<ans<<"\n";
    }
}