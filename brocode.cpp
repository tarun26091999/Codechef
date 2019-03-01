#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,n,x,y;
		scanf("%d%d%d",&n,&x,&y);
		long long int arr[n],sum1,sum2,min=10000000000;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		std::sort(arr,arr+n);
		for(i=0;i<=(n/2)+1;i++)
		{
			sum1=0,sum2=0;
			for(j=i+1;j<n;j++)
			sum1+=(arr[j]-arr[i])*x;
			sum1*=-1;
			for(j=0;j<i;j++)
			sum2+=(arr[i]-arr[j])*y;
			if(sum1+sum2<min&&sum1+sum2>0)
			min=sum1+sum2;
		}
		printf("%lld\n",min);
	}
}
