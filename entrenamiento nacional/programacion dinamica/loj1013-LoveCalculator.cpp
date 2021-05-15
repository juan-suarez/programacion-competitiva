#include <bits/stdc++.h>
using namespace std;
long long t,tam,aux,dp[31][31],dp2[31][31][61];
string A,B;
long long LCS(int i,int j)
{
    if(A[i]=='\0'||B[j]=='\0')
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(A[i]==B[j])
        return dp[i][j] = 1+LCS(i+1,j+1);
    return dp[i][j] = max(LCS(i+1,j),LCS(i,j+1));
}
long long comb(int i,int j,int tam)
{
    if(A[i]=='\0'||B[j]=='\0')
    {
        if(tam+(A.size()-i+B.size()-j)==aux)
            return 1;
        else
            return 0;
    }
    if(dp2[i][j][tam]!=-1)
        return dp2[i][j][tam];
    if(A[i]==B[j])
       return dp2[i][j][tam] = comb(i+1,j+1,tam+1);
    return dp2[i][j][tam]=comb(i+1,j,tam+1)+comb(i,j+1,tam+1);
}
int main()
{
    cin>>t;

    for(int i=0;i <t;i++)
    {
        tam=0;
        memset(dp,-1,sizeof dp);
        memset(dp2,-1,sizeof dp2);
        cin>>A>>B;
        aux=A.size()+B.size()-LCS( 0,0);
        cout<<"Case "<<i+1<<": "<<aux<<" "<<comb(0,0,0)<<"\n";
    }
}