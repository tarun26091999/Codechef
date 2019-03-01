#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k=0;
		scanf("%d",&n);
		int arr[n],i;
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		std::sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
			{
				k=1;
				break;
			}
		}
		if(k==1)
		printf("yes\n");
		else
		printf("no\n");
	}
}
