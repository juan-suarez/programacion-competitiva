#include<bits/stdc++.h>
using namespace std;

struct punto
{
    long long x;
    long long y;
    punto(){
        x = 0;y=0;
    }
    punto(long long x_,long long y_){
        x = x_;y=y_;
    }
    punto operator -(punto other)
    {
        return punto(x-other.x ,y - other.y);
    }
};
bool pcruz(punto p1,punto p2)
{
    return p1.x*p2.y-p2.x*p1.y;
}

int n,p,a,b,ans=0,est=0;
punto puntos[100000];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>n>>p;
    for(int i=0;i < n;i++)
        cin>>puntos[i].x>>puntos[i].y;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator(seed);
    uniform_int_distribution<int> distribution(0,n-1);
    for(int j = 0; j < 500;j++)
    {
        a = distribution(generator);
        b = distribution(generator);
        while(a==b&&n!=1)
            b = distribution(generator);
        ans=0;
        for(int i = 0;i < n;i++)
        {
            if(!pcruz(puntos[a]-puntos[b],puntos[i]-puntos[b]))
                ans++;
        }
        if(ans * 100 >= p* n)
        {
            est = 1;
            break;
        }
    }
    cout<<(est?"possible\n":"impossible\n");
}
