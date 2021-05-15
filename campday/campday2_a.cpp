#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,Q,f,query,caso=0;
    int A[10005];
    while (cin>>N>>Q && (N!=0 && Q != 0))
    {
        caso++;
        for(int i=1;i <= N;i++)
            cin>>A[i];
        sort(A,A+N+1);
        cout<<"CASE# "<<caso<<":"<<"\n";
        for(int i = 0;i < Q;i++)
        {   
            cin>>query;
            f=lower_bound(A,A+N+1,query)-A;
            if(A[f]==query)
                cout<<query<<" found at "<<f<<"\n";
            else
                cout<<query<<" not found\n";
        }
    }
    return 0;
}