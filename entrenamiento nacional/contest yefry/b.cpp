#include <bits/stdc++.h>
#define ll long long 
#define pii pair<int ,int>
using namespace std;
const int inf = 1e9,maxi = 1e5+5;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    pii mov[4] = {{1,0},{0,1},{0,-1},{-1,0}};
    int t,n,m,A[305][305],x=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int band = 1;
        x = 0;
        for(int i=0; i < n;i++)
        {
            for(int j=0; j < m;j++)
            {
                cin>>A[i][j];
                x = max(x,A[i][j]);
            }
        }
        if(x > 4 || A[0][m-1] > 2   ||
                    A[0][0] > 2     ||
                    A[n-1][0] > 2   ||
                    A[n-1][m-1] > 2)
            cout<<"NO\n";
        else
        {

            for(int i=0; i < n && band;i++)
            {
                for(int j=0; j < m;j++)
                {
                    if(A[i][j] > 0)
                    {
                        int cant = 0;
                        for(int r=0; r < 4; r++)
                        {
                            int y = i + mov[r].first , x = j + mov[r].second;
                            if(x < m && x >= 0 && y < n && y >= 0)
                            {
                                if(A[y][x] > 0)
                                    cant++;
                            }
                        }
                        if(cant < A[i][j])
                        {
                            for(int r = 0; r < 4 && cant  < A[i][j];r++)
                            {
                                int y = i + mov[r].first , x = j + mov[r].second;
                                if(x < m && x >= 0 && y < n && y >= 0 )
                                {
                                    if(A[y][x] == 0)
                                    {
                                        cant++;
                                        A[y][x] = 1;
                                    }
                                }
                            }
                            if(cant < A[i][j])
                            {
                                cout<<"NO\n";
                                band = 0;
                                break;
                            }
                        }
                    }
                }
            }
            if(band)
            {
                cout<<"YES\n";
                for(int i=0; i < n; i++)
                {
                    for(int j=0; j < m; j++)
                    {
                        if(A[i][j] > 0)
                        {
                            int cant = 0;
                            for(int r=0; r < 4; r++)
                            {
                                int y = i + mov[r].first , x = j + mov[r].second;
                                if(x < m && x >= 0 && y < n && y >= 0)
                                {
                                    if(A[y][x] > 0)
                                        cant++;
                                }
                            }
                            cout<<cant<<" "; 
                        }
                        else
                            cout<<"0 ";
                    }
                    cout<<"\n";
                }          
            }
        }
        
    }
}