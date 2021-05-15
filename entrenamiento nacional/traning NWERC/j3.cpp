#include <bits/stdc++.h>
 
using namespace std; 
long long x,n,A[1000005],i,j,f,a,b;
int main (){
 
    ios::sync_with_stdio(0); cin.tie(0);
    while(cin>>x)
    {
        x *= (1e7);
        cin>>n;
        for(int f=0; f < n;f++)
            cin>>A[f];
        sort(A,A+n);
        a = -1;b = -1;j=n-1;i=0;
        while(i < j)
        {
            if(A[i]+A[j] > x)
            {
                j--;
                continue;
            }
            if(A[i] + A[j] < x)
            {
                i++;
                continue;
            }
            if(A[i]+A[j]==x)
            {
                a=A[i];b=A[j];
                break;
            }
        }
        if(a==-1&&b==-1)
            cout<<"danger\n";
        else
            cout<<"yes "<<a<<" "<<b<<"\n";
    }
}