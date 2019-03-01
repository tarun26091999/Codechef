#include<bits/stdc++.h>
main()
{
	int R,i,n,r;
	scanf("%d%d",&n,&r);
	for(i=0;i<n;i++)
	{
		scanf("%d",&R);
		if(R>=r)
		printf("Good boi\n");
		else
		printf("Bad boi\n");
	}
}
