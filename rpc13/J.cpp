#include <bits/stdc++.h>

using namespace std;
int a,b,c,i,n,h;
string Name,names[200000];
priority_queue<pair<pair<int,int>,int>> cola;
int main()
{
    
    while(cin>>n)
    {
      i = 0;
      while(n--)
      {
        cin>>a;
        if(a == 1)
        {
          cin>>h>>b>>Name;
          names[i] = Name;
          cola.push({{-b,-h},i});
          i++;
        }
        else
        {
            cin>>h;
            cout<<-cola.top().first.second<<" "<<h<<" "<<h+cola.top().first.second<<" "<<names[cola.top().second]<<"\n";
            cola.pop();
        }
      }
      while(!cola.empty())
        cola.pop();
    } 
}