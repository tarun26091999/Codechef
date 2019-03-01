#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,n,b,max=0;
		scanf("%d%d",&n,&b);
		for(i=0;i<n;i++)
		{
			int w,h,p;
			scanf("%d%d%d",&w,&h,&p);
			if(w*h>max&&p<=b)
			max=w*h;
		}
		if(max!=0)
		printf("%d\n",max);
		else
		printf("no tablet\n");
	}
}
