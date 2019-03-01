#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x,i,sum=0;
		scanf("%d%d",&x,&n);
		for(i=0;i<=n;i++)
		{
			if(i%x==0)
			sum+=i;
		}
		printf("%d\n",sum);
	}
}
