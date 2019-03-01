#include<bits/stdc++.h>
main()
{
	int t,sp;
	scanf("%d\n",&t);
	sp=t;
	while (t--)
	{
	   int n,p,i;   
	   scanf("%d",&n);
	   p=pow(2,n);
	   printf("1");   
	   //for(i=1;i<=sp;i++)
	   printf(" ");   
	   printf("%d",p);   
	   //for(i=1;i<=sp;i++)
	   printf(" ");
	}
	return 0;
	}
