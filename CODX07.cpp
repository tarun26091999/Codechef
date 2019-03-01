#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,q,count=0;
		scanf("%d%d",&n,&q);
		for(i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				if(i%q==0)
				count++;
                if(((n/i)%q==0)&&(i!=n/i))
                count++;
			}
		}
		printf("%d\n",count);
	}
}
