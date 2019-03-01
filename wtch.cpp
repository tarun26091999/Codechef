#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int c=0,n,i,count=0;
		scanf("%d",&n);
		char str[n+1];
		scanf("%s",str);
		for(i=0;i<n;i++)
		{
			if(str[i]=='0')
			c++;
		}
		if(c==n&&n%2==0)
		printf("%d\n",n/2);
		else if(c==n&&n%2!=0)
		printf("%d\n",(n+1)/2);
		else
		{
			for(i=0;i<n;i++)
		    {   
			    if(i==0)
			    {
				    if(str[i]=='0'&&str[i+1]=='0')
				    {
					    count++;
					    str[i]='1';
				    }
			    }
			    else if(i>0&&i<n-1)
			    {
				    if(str[i]=='0'&&str[i+1]=='0'&&str[i-1]=='0')
				    {
					    count++;
					    str[i]='1';
				    }
			    }
			    else
			    {
				    if(str[i]=='0'&&str[i-1]=='0')
				    {
					    count++;
					    str[i]='1';
				    }
			    }
		    }
		    printf("%d\n",count);
		}
	}
}
