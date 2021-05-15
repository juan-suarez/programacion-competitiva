#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    long long t,A[3],B[3],ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>A[0]>>A[1]>>A[2];
        cin>>B[0]>>B[1]>>B[2];
        if(B[2]>A[0])
        {
            B[2] -=A[0];
            if(B[2] > A[2])
            {
                B[2] -= A[2];
                if(B[2] >= A[1])
                    ans += (A[1]*-2);
                else
                    ans += (B[2]*-2);
            }
            else
                A[2] -= B[2];
        }
        else
            A[0] -=B[2];
        if(A[2] >= B[1])
            ans +=  (B[1]*2);
        else
            ans+= (A[2]*2);
        cout<<ans<<"\n";  
    }
}