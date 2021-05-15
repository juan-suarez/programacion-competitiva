#include <bits/stdc++.h>
using namespace std;
const int maxi = 9e4 +5;
int n,m,ans = 0;
string answers[10001];
int grades[10001];
map<int,char> m;
void bg()
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m;j++)
        {
            if(answers[i][j]=='F')
            grades[i]++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);


}