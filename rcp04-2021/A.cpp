#include <bits/stdc++.h>
using namespace std;
const int maxi = 9e4 +5; 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    vector<int>cards(maxi);
    int n,aux;
    cin>>n;
    for(int i=0; i < n;i++)
        cin>>cards[i];
    sort(cards.begin(),cards.begin()+n);
    int ant = cards[0],ans = 0;
    for(int i=1; i < n;i++)
    {
        if((cards[i]-1)!=cards[i-1])
        {
            ans+=ant;
            ant = cards[i];
        }
        
    }
    ans+=ant;
    cout<<ans<<"\n";
    return 0;
}