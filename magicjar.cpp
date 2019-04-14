#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i,arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		std::sort(arr,arr+n);
		printf("%d\n",arr[n-1]);
	}
}
