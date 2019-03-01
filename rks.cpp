#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,row,col;
		scanf("%d%d",&n,&k);
		int r[n]={0},c[n]={0},i,j;
		for(i=0;i<k;i++)
		{
			scanf("%d%d",&row,&col);
			r[row-1]++;
			c[col-1]++;
		}
		printf("%d ",n-k);
		for(i=0;i<k;i++)
		{
			if(r[i]==0)
			{
				for(j=0;j<k;j++)
			    {   
				    if(c[j]==0)
				    printf("%d %d",i+1,j+1);
				    break;
			    }
			}
			else
			continue;
		}
		printf("\n");
	}
}
