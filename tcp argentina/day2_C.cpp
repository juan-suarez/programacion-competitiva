#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,bande=0;
    cin>>n>>p;
    string S;
    cin>>S;
    for(int i = 0; i < n;i++)
    {
        if(i<n-p)
        {
            if(S[i]==S[i+p]&&S[i]!='.')
                bande++;
            else
            {
                if(S[i]=='.'&&S[i+p]=='0')
                {
                    S[i]='1';
                    continue;
                }
                if(S[i]=='.'&&S[i+p]=='1')
                {
                    S[i]='0';
                    continue;
                }
                if(S[i]=='.')
                {
                    S[i]='1';
                    continue;
                }
                if(S[i]=='1'&&S[i+p]=='.')
                {
                    S[i+p]='0';
                    continue;
                }
                if(S[i]=='0'&&S[i+p]=='.')
                {
                    S[i+p]='1';
                    continue;
                }
            }
        }
        else
        {
            if(S[i]=='.')
                S[i]='0';
        }
    }
    if(bande==n-p)
        cout<<"No\n";
    else
        cout<<S<<"\n";
}