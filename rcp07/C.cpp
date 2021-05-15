#include <bits/stdc++.h>

using namespace std;
long long int elevar(long long int A)
{
    return A*A;
}
int main()
{

    long long int circ[3],cuad[3],distesquinas[4],ans=0;
    cin>>circ[0]>>circ[1]>>circ[2];
    cin>>cuad[0]>>cuad[1]>>cuad[2];
    distesquinas[0]=elevar(cuad[0]-circ[0])+elevar(cuad[1]-circ[1]);//BL
    distesquinas[1]=elevar(cuad[0]+cuad[2]-circ[0])+elevar(cuad[1]-circ[1]);//BR
    distesquinas[2]=elevar(cuad[0]-circ[0])+elevar(cuad[1]+cuad[2]-circ[1]);//TL
    distesquinas[3]=elevar(cuad[0]+cuad[2]-circ[0])+elevar(cuad[1]+cuad[2]-circ[1]);//TR
    for(int i=0;i < 4;i++)
    {
        if(distesquinas[i]==elevar(circ[2]))
            ans++;
        if(distesquinas[i]<elevar(circ[2]))
            ans+=2;
    }
    if(ans>1)
        cout<<"2\n";
    else
        cout<<ans<<"\n";
    
    
}