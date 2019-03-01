#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,count=0;
		scanf("%d",&n);
		int arr[n],i;
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		std::sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i]<=count)
			count++;
		}
		printf("%d\n",count);
	}
}
