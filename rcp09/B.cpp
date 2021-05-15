#include <bits/stdc++.h>
 
using namespace std; 
int t,A[2],ans=0,aux2;
pair<int, int>aux;
map<int,int>frec,cant;
priority_queue<pair<int ,int>> cola;
 
int main (){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t>>A[0]>>A[1];
    cola.push({A[0]*-1,0});cola.push({A[1]*-1,1});frec[A[0]]++;frec[A[1]]++;
    while(1)
    {
        aux = cola.top();cola.pop();
        if(aux.first*-1 >= t)
            break;
        if(frec[aux.first*-1]>=2)
        {
            ans++;cola.pop();
            cola.push({aux.first-A[0],0});cola.push({aux.first-A[1],1});
            frec[aux.first*-1+A[0]]++;frec[aux.first*-1+A[1]]++;
        }
        else
        {
            ans++;
            cola.push({aux.first-A[aux.second],aux.second});frec[aux.first*-1+A[aux.second]]++;
        }
    }
    cout<<ans<<"\n";
}