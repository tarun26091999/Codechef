#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while (t--)
	{
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    if(x+y==z||x+z==y||y+z==x)
	    printf("yes\n");
		else
	    printf("no\n");
	}
}
