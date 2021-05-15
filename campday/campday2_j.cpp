
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int A[N+1];
    set <int > menores;
    for(int i =1;i <= N;i++)
    {
        cin >> A[i];
        menores.insert(A[i]);
    }
    
    return 0;

}
