#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,favour=0,against=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
		{
			if(arr[i]==1)
			favour++;
			else if(arr[i]==-1)
			against++;
		}
		if(favour>=against)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
