#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    vector<vector<string>> menus(10000);
    string nombre,menu;
    cin>>n;
    int respuestas[n],sopa,pan,final=0;
    memset(respuestas,0,sizeof respuestas);
    for(int i = 0;i < n; i++)
    {
        cin>>k;
        cin.ignore(1000,'\n');
        for(int j = 0;j < k+1 ;j++)
        {
            getline(cin,menu);
            menus[i].push_back(menu);
        }
    }
    for(int i = 0;i < n; i++)
    {
        sopa = 0;pan=0;
        for(int j = 0;j < k;j++)
            {
                for(int x = 0;x < menus[j][i].length();x++)
                {
                    if(!menus[j][i].substr(0 , x).compare("pea soup")|| !menus[j][i].substr(x , menus[j][i].size()).compare("pea soup"))
                        sopa++;
                    if(!menus[j][i].substr(0 , x).compare("pancakes")|| !menus[j][i].substr(x , menus[j][i].size()).compare("pancakes"))
                        pan++;
                }
            }
            if(sopa&&pan)
            {
                respuestas[i]=1;
                final++;
            }
            else
                respuestas[i]=0;
    }
    if(final!=n-1)
    {
        for(int i=0;i < n;i++)
        {
            if(respuestas[i])
            {
                cout<<menus[0][i]<<"\n";
                break;
            }
        }
    }
    else
        cout<<"Anywhere is fine I guess\n";
    return 0;
}