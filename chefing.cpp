#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,alp[123]={0},count=0;
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n;i++)
		{
			char str[201];
			scanf("%s",str);
			for(j=0;j<strlen(str);j++)
			{
				if(alp[str[j]]==i)
				alp[str[j]]++;
				else
				continue;
			}
		}
		for(j=97;j<=122;j++)
		{
			if(alp[j]==n)
			count++;
			else
			continue;
		}
		printf("%d\n",count);
	}
}
