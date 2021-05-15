#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,t,d,aux;
    cin>>N;
    pair <int,int> td[N];
    int answ[N];
    memset(answ,0,sizeof answ);
    for(int i=0;i < N;i++)
    {
        cin>>t>>d;
        td[i]= make_pair(t,d);
    }
    for(int i=0;i < N-1;i++)
    {
        for(int j=i+1; j < N;j++)
        {
            aux = (td[j].second-td[i].second)/(td[j].first-td[i].first);
            if(aux > answ[i])
                answ[i] = aux; 
        }
    }
    sort(answ,answ+(N-1));
    cout<<answ[N-2]<<"\n";
}