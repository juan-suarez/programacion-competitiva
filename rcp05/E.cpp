#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,aux;
    cin>>n;
      n=n%4;
    if(n==1)
        cout<<"Either\n";
    else if(n==2){
        cout<<"Odd\n";
    }
    else if(n==3){
        cout<<"Either\n";
    }
    else if(n==0){
        cout<<"Even\n";
    }


}