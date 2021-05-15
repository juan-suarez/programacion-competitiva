#include <bits/stdc++.h>
 
using namespace std; 
 
int main (){
 
    ios::sync_with_stdio(0); cin.tie(0);
    long long mini, total,maxi,prom,n, s, t, naux, saux,tmaxi=0, taux,suma; 
    map <long long, long long> equipaje,aux; 
    pair <long long, long long> in, out,ant;  
    
    cin >> n >> s >> t; 
 
    for (int i= 0; i<n; i++){
        cin >> naux;
        tmaxi = max(tmaxi,naux); 
        equipaje[naux]++;  
    }
 
    mini = 1e18;  maxi =0; suma = 0;
 
    for (auto i : equipaje) {
 
        aux = equipaje;
        in = i;
        total = 0;  
        while(!aux.empty()) {
            aux[in.first]--;
            if(aux[in.first] <= 0) 
                aux.erase(in.first); 
            total += t;
            if(aux.empty())
                break;
            auto it = aux.lower_bound((in.first + t)%s);
            if(it==aux.end())
                out = *aux.begin();
            else
                out = *it;
            total +=(s + out.first - ((in.first + t)%s))%s;
            in = out; 
        }
        mini = min(total, mini);
        if(i == *equipaje.begin())
        {
            long long oe = total + s - tmaxi+i.first -1;
            maxi = max(maxi,oe);
            oe-=total;
            suma += ((oe)*(oe+1)/2 + ((oe+1) * total));

        }
        else
        {
            long long oe = total +i.first -ant.first - 1;
            maxi = max(maxi,oe);
            oe-=total;
            suma += ((oe)*(oe+1)/2 + ((oe+1) * total));

        }
        ant = i;
    }
    long long div = __gcd(suma,s);
    cout << mini << endl << maxi <<endl<<suma/div<<"/"<<s/div<<endl; 
}