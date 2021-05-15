#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long c=0,j=0;
    string a,b,r,n1,n2;
    cin>>a>>b;
    while(a[j]>='a')
    {
        if(a[j]>b[j])
        {
            c = 1;
            break;
        }
        if(b[j]>a[j])
        {
            c = 2;
            break;
        }
        j++;
    }    
    if(!c)
    {
        n1=a.substr(j,a.size()-j);n2=b.substr(j,b.size()-j);
        if(n1.size() > n2.size())
            c=1;
        if(n2.size() > n1.size())
            c=2;
        j=0;
        while(j < n1.size()&&c==0)
        {
            if(n1[j]>n2[j])
            {
                c = 1;
                break;
            }
            if(n2[j]>n1[j])
            {
                c = 2;
                break;
            }
            j++;
        }
    }
    if(!c)
        cout<<"=\n";
    if(c == 1)
        cout<<">\n";
    if(c==2)
        cout<<"<\n";
        


    
}