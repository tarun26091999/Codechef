#include<bits/stdc++.h>
main()
{
	int i,n,q,count=0;
	scanf("%d%d",&n,&q);
	int arr[q];
	for(i=0;i<q;i++)
	{
		scanf("%d",&arr[i]);
	}
	std::sort(arr,arr+q);
	for(i=0;i<q;i++)
	{
		if(n>=arr[i])
		{
			n-=arr[i];
			count++;
		}
		else
		break;
	}
	printf("%d\n",count);
}
