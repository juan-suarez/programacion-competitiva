#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string S,A,C;
    vector<vector<int>>abc(27);
    int n,i,j;
    cin>>S>>n;
    for(int f = 0; f < S.length();f++)
        abc[S[f]-'a'].push_back(f);
    while(n--)
    {
        cin>>A;
        i=0;j=0;C="";
        while(j < A.length())
        {
            auto it = lower_bound(abc[A[j]-'a'].begin(),abc[A[j]-'a'].end(),i);
            if(it != abc[A[j]-'a'].end())
            {
                i = (*it) + 1;
                C+=A[j];
                j++;
            }
            else
                break;
        }
        cout<<((j)? C:"IMPOSSIBLE")<<"\n";
    }
}
