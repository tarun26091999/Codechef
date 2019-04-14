#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,pos=0,neg=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
		{
			if(arr[i]>0)
			pos++;
			else if(arr[i]<0)
			neg++;
		}
		if(pos>=neg)
		{
			if(pos!=n)
			printf("%d %d\n",pos,neg);
			else if(pos==n)
			printf("%d %d\n",n,n);
		}
		else
		{
			if(neg!=n)
			printf("%d %d\n",neg,pos);
			else if(neg==n)
			printf("%d %d\n",n,n);
		}
	}
}
