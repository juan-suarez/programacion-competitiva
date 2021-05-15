#include<bits/stdc++.h>
using namespace std;
const int mini = -1e6-1,maxi = 1e6+1;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n,X[1000],Y[1000],xmax=mini,ymax=mini,xmin=maxi,ymin=maxi,p=0,p2;
    cin>>n;
    for(int i=0; i < n;i++)
    {
        cin>>X[i]>>Y[i];
        xmin = min(xmin,X[i]);xmax = max(xmax,X[i]);
        ymin = min(ymin,Y[i]);ymax = max(ymax,Y[i]);
    }
    for(int i = 1; i < n ; i++)
    {
        p += abs((X[i]-X[i-1]))+abs((Y[i]-Y[i-1]));
    }
    p2 =(abs(xmax-xmin)*2)+(abs(ymax-ymin)*2);
    cout << p - p2<<"\n";
}