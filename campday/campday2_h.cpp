#include <bits/stdc++.h>

using namespace std;
void repetir(char a,int cant)
{
    for(int i=0;i < cant;i++)
        cout<<a;
}
int main()
{
    string s;
    set<char> A;
    cin >> s;
    for(int i = 0;i < s.size();i++)
        A.insert(s[i]);
    while(!A.empty())
    {
        if(A.count(*A.rbegin()) > 1 && A.rbegin() != 'z')
        {
            repetir(*A.rbegin()+1,(A.count(*A.rbegin()))/2);
            repetir(*A.rbegin(),(A.count(*A.rbegin()))%2);
        }
        else
            repetir(*A.rbegin(),A.count(*A.rbegin());
        A.erase(A.rbegin);
    }
}
