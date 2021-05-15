#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int contador,divisores;
    contador = 0;
    for (int i=1; contador <=10;i++)
    {
        divisores = 0;
        for(int j= 2;j < i;j++)
        {
            if(i % j == 0)
            {
                divisores++;
                break;
            }
        }
        if(divisores==0)
        {
            cout<<i<<" ";
            contador++;
        }
    }
    return 0;
}