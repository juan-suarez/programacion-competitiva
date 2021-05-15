#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int m ,s,rh,rm,rs,est=0;
    string A,ansh,ansm,anss;
    cin>>A;
    m = (A[0]-'0')*10 + (A[1]-'0');
    s = (A[3]-'0')*10 + (A[4]-'0');
    rs = (60 - s)%60;
    if (m >= s)
    {
        rm = (59 -((m - s)))%60;
        est = 1;
    }
    else
        rm = (s - m -1)%60;
    if(est)
        rh = m - 1;
    else
        rh = m;
    if(rs == 0)
        rm= (rm+1)%60;
    ansh= "";ansm="";anss="";
    ansh += ((rh / 10) + '0') ;ansh += ((rh % 10) + '0');
    ansm += ('0' + (rm / 10)) ;ansm += ('0' + (rm % 10));
    anss += ('0' + (rs / 10)) ;anss += ('0' + (rs % 10));
    cout<<ansh<<":"<<ansm<<":"<<anss<<"\n";
    
}