#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    string line,a,b;
    map<string,string> diccionario;
    while(getline(cin,line)&&line!="")
    {
        stringstream ss(line);
        ss>>a>>b;
        diccionario[b] = a;
    }
    while(getline(cin,line)&&!line.empty())
    {
        auto aux=diccionario[line];
        if(!aux.empty()){
          cout<<aux<<endl;
        }else
          cout<<"eh"<<endl;
    }
}