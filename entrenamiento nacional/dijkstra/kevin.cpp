#include<iostream>
using namespace std;

int main()
{
    int a,b,suma;
    while(cin>>a>>b && a && b)
    {
        suma=0;
        for(int i=min(a,b);i <= max(a,b);i++)
        {
            cout<<i<<" ";
            suma+=i;
        }
        cout<<"sum="<<suma<<"\n";
    }
}