#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,c,count=0,i;
		scanf("%d%d",&n,&k);
		int sco[n+1];
		for(i=1;i<=n;i++)
		scanf("%d",&sco[i]);
		std::sort(sco+1,sco+n+1);
		{
			c=sco[n-k+1];
		}
		for(i=n;i>=1;i--)
		{
			if(sco[i]>=c)
			count++;
		}
		printf("%d\n",count);
	}
}
