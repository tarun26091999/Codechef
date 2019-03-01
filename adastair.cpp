#include<bits/stdc++.h>
main()                                                                        
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,x,height,j,n,k,count=0;
		scanf("%d",&n);
		scanf("%d",&k);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		height=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]-height<=k)
			height=arr[i];
			else
			{
				while(height+k<arr[i])
				{
					height+=k;
				    count++;
				}
				height=arr[i];
			}
		}
		printf("%d\n",count);
	}
}
