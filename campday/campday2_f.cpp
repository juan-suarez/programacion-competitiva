#include <bits/stdc++.h>

using namespace std;
int A[10005];
int B[10005];
int main()
{
    int t,n,total,perdida,C,D,cnt;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        total = 0;cnt=0;
        cin>>n;
        for(int j=0;j < n;j++)
        {
            cin>>A[j];
            if(j != 0 )
                total += abs(A[j-1]-A[j]);
        }
        for(int j = 1;j < n-1;j++)
        {
            C = abs(A[j-1]-A[j])+ abs(A[j]-A[j+1]);
            D = abs(A[j-1]-A[j+1]);
            B[j] = total -(C-D);
        }
        if(n == 2)
            cout<<"2\n";
        else
            cout<<n-1<<"\n";
        for(int j =0;j < n ; j++)
        {
            if(B[j]!=total || cnt != 0)
                cout<<A[j]<<" ";
            else
                cnt = 1;
        }
    }
}