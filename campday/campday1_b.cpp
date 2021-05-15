#include <bits/stdc++.h>

int main()
	
{
	char A[128];
	int t;
	scanf("%d",&t);
	int pa=0,pc=0,ca=0,cc=0;
	while(t > 0)
	{
		char A[128];
	    pa=0,pc=0,ca=0,cc=0;
	    scanf("%s",A);
	    for(int i=0;i < strlen(A);i++)
	    {
	    	if(A[i]=='(')
	    		pa++;
	    	if(A[i]==')')
	    		pc++;
	    	if(A[i]=='[')
	    		ca++;
	    	if(A[i]==']')
	    		cc++;
		}
		t--;
		if((pa==pc)&&(ca==cc))
			printf("Yes\n");
		else
			printf("No\n");
	}
	
}
