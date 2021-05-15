#include <bits/stdc++.h>
using namespace std;
long long int tpascal[35][35],factoriales[30];
void inicializar()
{
    factoriales[0]=1;
    for(int i=0;i<=30;i++)
    {
        tpascal[i][0]=1;tpascal[i][i]=1;
    }
    for(int i=2;i<=30;i++)
    {
        for(int j=1;j < i;j++)
            tpascal[i][j] = tpascal[i-1][j] + tpascal[i-1][j-1];
    }
    for(int i=1;i<30;i++)
        factoriales[i]=i * factoriales[i-1];

}

int main()
{
    int T,n,k;
    inicializar();
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n>>k;
        if(k>n)
            cout<<"Case "<<i+1<<": 0\n";
        else
            cout<<"Case "<<i+1<<": "<<tpascal[n][k]*tpascal[n][k]*factoriales[k]<<"\n";
    }
}