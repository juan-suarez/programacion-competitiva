#include <bits/stdc++.h>
 
using namespace std; 
 
int main (){
 
    ios::sync_with_stdio(0); cin.tie(0);
    long double p = 1.073132993,r,l;
    cin>>r;l = (r*4)+((r*2)/p);
    cout<<fixed<<setprecision(5);
    cout<<l*l<<"\n";
}