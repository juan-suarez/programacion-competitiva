#include <bits/stdc++.h>

using namespace std;
int abc[28];
int main()
{
    memset(abc,0,sizeof abc);
    int i=0,j=1,ans=1,cont=1,k;
    string A;
    cin>>A;
    cin>>k;
    int tam = A.size();
    abc[A[0]-'a']=1;
    while(j < tam && i < tam)
    {
        if(cont > k)
        {
            ans = max(ans,j-i-1);
            abc[A[i]-'a']--;
            if(!abc[A[i]-'a'])
                cont--;
            i++;
        }
        else
        {
            if(!abc[A[j]-'a'])
                cont++;
            abc[A[j]-'a']++;
            j++;
        }
    }
    if(cont > k)
        ans = max(ans,j-i-1);
    else
        ans = max(ans,j-i);

    cout<<ans<<"\n";
}