#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,tr,dr,ts,ds,count1=0,count2=0;
		scanf("%d",&tr);
		int trur[tr];
		for(i=0;i<tr;i++)
		scanf("%d",&trur[i]);
		scanf("%d",&dr);
		int darr[dr];
		for(i=0;i<dr;i++)
		scanf("%d",&darr[i]);
		scanf("%d",&ts);
		int trus[ts];
		for(i=0;i<ts;i++)
		scanf("%d",&trus[i]);
		scanf("%d",&ds);
		int dars[ds];
		for(i=0;i<ds;i++)
		scanf("%d",&dars[i]);
		for(i=0;i<ds;i++)
		{
			for(j=0;j<dr;j++)
			{
				if(dars[i]==darr[j])
				{
					count1++;
					break;
				}
			}
		}
		for(i=0;i<ts;i++)
		{
			for(j=0;j<tr;j++)
			{
				if(trus[i]==trur[j])
				{
					count2++;
					break;
				}
			}
		}
		if(count1==ds&&count2==ts)
		printf("yes\n");
		else
		printf("no\n");
	}
}
