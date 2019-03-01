#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int atc[n],def[n],i,max=0;
		for(i=0;i<n;i++)
		scanf("%d",&atc[i]);
		for(i=0;i<n;i++)
		scanf("%d",&def[i]);
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				if(def[i]>atc[i+1]&&def[i]>atc[n-1]&&def[i]>(atc[i+1]+atc[n-1]))
				{
					if(def[i]>max)
				    max=def[i];
				}
			}
			else if(i==n-1)
			{
				if(def[i]>atc[i-1]&&def[i]>atc[0]&&def[i]>(atc[i-1]+atc[0]))
				{
					if(def[i]>max)
				    max=def[i];
				}
			}
			else
			{
				if((def[i]>atc[i-1])&&(def[i]>atc[i+1])&&(def[i]>(atc[i-1]+atc[i+1])))
			    {
				    if(def[i]>max)
				    max=def[i];
			    }
			}
		}
		if(max!=0)
		printf("%d\n",max);
		else
		printf("%d\n",-1);
	}
}
