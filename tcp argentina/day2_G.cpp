#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,s,numero,suma;
    cin>>a>>b>>s;
    suma = abs(a)+abs(b);
    numero =abs(s - suma);
    if(numero%2==0&& s >= suma)
        cout<<"yes\n";
    else
        cout<<"No\n";
}