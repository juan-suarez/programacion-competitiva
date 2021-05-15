#include <bits/stdc++.h>

using namespace std;
string spurce[501];
int test[501][501];
int n,m,t;
int spurces(int i,int j)
{
    int ans = 0,cont = 1,band = 1,ia = i;
    while(ia < n && band)
    {
        int contaux = cont;
        if((j-cont >= 0 )&& (j + cont < m)&&(spurce[ia][j]=='*'))
        {
            while(contaux)
            {
                if(spurce[ia][j-contaux]!='*')
                {
                    band = 0;
                    break;
                }
                if(spurce[ia][j+contaux]!='*')
                {
                    band = 0;
                    break;
                }
                contaux--;
            }
            if(band)
                ans++;
            cont++;    
        }
        else
            break;
        ia++;
    }
    return ans;
}
void solve()
{
    int ans = 0;
    for(int i=0;i < n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(spurce[i][j]=='*')
            {
                if(i > 0)
                {
                    if(spurce[i-1][j]=='*')
                    {
                        int aux = spurces(i+test[i-1][j],j);
                        ans+=(aux+test[i-1][j]);
                        test[i][j] = test[i-1][j]+aux;
                    }
                    else
                    {
                        int aux = spurces(i+1,j);
                        ans+= aux+1;
                        test[i][j] = aux;
                    }
                }
                else
                {
                    int aux = spurces(i+1,j);
                    ans+= aux+1;
                    test[i][j] = aux;
                }
                //cout<<ans<<" - "<<i<<" , "<<j<<"\n";
            }
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    cin>>t; 
    while(t--)
    {
        cin>>n>>m;
        for(int i = 0;i < n;i++){cin>>spurce[i];}
        solve();
    }
}