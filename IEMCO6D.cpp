#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,l,j,count1=0,count2=0,max=0,n;
		scanf("%lld",&n);
		char str[100001];
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
		{
			count1=0,count2=0;
			for(j=i+1;str[j]!='\0';j++)
			{
				if(str[i]==str[j]&&str[i]=='0')
				count1++;
				else if(str[j]=='1')
				count2++;
			}
			l=count1-count2;
			if(l>max)
			max=l;
		}
		if(max==0)
		printf("-1\n");
		else
		printf("%lld\n",max+1);
	}
}
