#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,numero,bandera;
    cin>>n;
    for(int i=1;i < 1000;i++)
    {
        bandera=0;
        numero=n*i+1;
        for(int j = numero/2;j>1;j--)
        {
            if(numero%j==0)
                bandera=1;
        }
        if(bandera)
        {
            cout<<i<<"\n";
            break;
        }
    }

}