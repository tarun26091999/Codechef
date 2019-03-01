#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,sum=0,x,n,s,k;
		scanf("%lld",&n);
		scanf("%lld%lld",&s,&k);
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}
		if(sum>s)
		printf("0\n");
		else
		{
			x=s-sum;
			if(x%k==0)
			printf("%lld\n",x/k);
			else
			printf("%lld\n",(x/k)+1);
		}
	}
}
