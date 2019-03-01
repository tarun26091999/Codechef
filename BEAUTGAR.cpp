#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,count=0;
		char str[100000];
		scanf("%s",str);
		int l=strlen(str);
		for(i=0;i<l-1;i++)
		{
			if(str[i]!=str[i+1])
			count++;
		}
		if(count==l-1)
		printf("yes\n");		
	}
}
