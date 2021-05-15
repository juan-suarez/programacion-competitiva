#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int c,p,cp,n,t,number,deleted,impo,ans;
    queue<int> cola;
    stack<int> pila;
    priority_queue<int>colap;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;p=0;cp=0;deleted=0;ans=0;impo=0;
        for(int i=0; i < n;i++)
        {
            scanf("%d %d",&t,&number);
            if(t==1)
            {
                cola.push(number);
                pila.push(number);
                colap.push(number);
            }
            else
            {
                if(cola.empty())
                    impo=1;
                else
                {
                    if(cola.front()==number)
                        c++;
                    if(pila.top()==number)
                        p++;
                    if(colap.top()==number)
                        cp++;
                    deleted++;cola.pop();pila.pop();colap.pop();
                }
            }
        }
        if(c == deleted)
				ans++;
		if(p == deleted)
				ans++;
		if(cp == deleted)
				ans++;
		if(impo == 1 || ans == 0 )
			printf("impossible\n");
		else
		{
			if(ans > 1)
				printf("not sure\n");
			else
			{
				if(p == deleted)
					printf("stack\n");
				if(c == deleted)
					printf("queue\n");
				if(cp == deleted)
					printf("priority queue\n");
			}
		}

    }
}