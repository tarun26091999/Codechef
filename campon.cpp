#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int d;
		scanf("%d",&d);
		int i,j,sch[d][2],arr[32]={0};
		for(i=0;i<d;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d",&sch[i][j]);
				arr[sch[i][0]]=sch[i][1];
			}
		}
		int q;
		scanf("%d",&q);
		int camp[q][2];
		for(i=0;i<q;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d",&camp[i][j]);
			}
			int l,sum1=0;
	        for(l=1;l<=camp[i][0];l++)
	        sum1+=arr[l];
			if(sum1>=camp[i][1])
			printf("Go Camp\n");
			else
			printf("Go Sleep\n");
		}
	}
}
