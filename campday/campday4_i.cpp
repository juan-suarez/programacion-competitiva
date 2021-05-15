#include <bits/stdc++.h>
using namespace std;
#define tam 105
char A[tam][tam];
char B[tam];
set<pair<int, int>> visitados[tam];
pair<int, int> movements[9];
int n,m,cont=0;
void InitializationMovements()
{

    movements[1].first = 0;
    movements[1].second = -1;//izquierda

    movements[2].first = 0;
    movements[2].second = 1;//derecha

    movements[3].first = -1;
    movements[3].second= 0;//abajo

    movements[4].first = 1;
    movements[4].second = 0;//arriba

    movements[5].first = 1;
    movements[5].second = -1;//darribai

    movements[6].first = 1;
    movements[6].second = 1;//darribad

    movements[7].first = -1;
    movements[7].second= -1;//dabajoi

    movements[8].first = -1;
    movements[8].second = 1;//dabajod
}
void bfs(pair <int, int> p_inicial)
{
    queue<pair<int , int>> cola;
    pair<int,int> aux,actual;
    cola.push(p_inicial);
    while(!cola.empty())
    {  
        actual = cola.front();
        cola.pop();
        for(int i = 1;i < 9;i++)
        {
            aux.first=abs(actual.first + movements[i].first);
            aux.second=abs(actual.second + movements[i].second);
            if((!visitados[cont].count(aux) && (aux.first< m && aux.second< n))&& A[aux.first][aux.second]=='@')
            {
                cola.push(aux);
                visitados[cont].insert(aux);
            }
        }
    }
}
int main()
{
    int answ;
    InitializationMovements();
    while(cin>>m>>n && (n!=0 && m!=0))
    {
        answ=0;
        for(int i=0;i < m;i++)
        {
            cin>>B;
            for(int j = 0; j < n;j++)
                A[i][j] = B[j]; 
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                if(!visitados[cont].count(make_pair(i,j)) && A[i][j] == '@')
                {
                    bfs(make_pair(i,j));
                    answ++;
                }
            }
        }
        cont++;
        cout<<answ<<"\n";
    }
}