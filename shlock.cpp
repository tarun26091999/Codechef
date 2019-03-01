#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[1001];
		int i,l,j,max;
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l-1;i++)
		{
			max=0;
			for(j=i+1;j<l;j++)
			{
				if(str[i]+str[j]==219)
			    {
				    int k=j+i;
				    if(k>max)
				    max=k;
			    }
			}
		}
		printf("%d\n",max);
	}
}
