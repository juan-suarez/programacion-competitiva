#include <bits/stdc++.h>

using namespace std;

int main(
    int , menor;
    cin>>N;
    int A[N];
    for(int i=0;i < N;i++)
    {
        cin>>A[i];
    }
    menor = A[0];
    for(int i=0; i < n;i++)
    {
        if(A[i] > menor)
        {
            menor = A[i];
            break;
        }
    }
    cout<<menor;
)