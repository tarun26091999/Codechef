#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[10],e[9];
		int i,j,k=0,l,r,count=0;
		scanf("%s %s %d %d",s,e,&l,&r);
		{
			if(strcmp(s,"monday")==0)
		    k=1;
		    else if(strcmp(s,"tuesday")==0)
		    k=2;
		    else if(strcmp(s,"wednesday")==0)
		    k=3;
		    else if(strcmp(s,"thursday")==0)
		    k=4;
		    else if(strcmp(s,"friday")==0)
		    k=5;
		    else if(strcmp(s,"saturday")==0)
		    k=6;
		    else if(strcmp(s,"sunday")==0)
		    k=7;
		}
		{
			if(strcmp(e,"monday")==0)
		    j=1;
		    else if(strcmp(e,"tuesday")==0)
		    j=2;
		    else if(strcmp(e,"wednesday")==0)
		    j=3;
		    else if(strcmp(e,"thursday")==0)
		    j=4;
		    else if(strcmp(e,"friday")==0)
		    j=5;
		    else if(strcmp(e,"saturday")==0)
		    j=6;
		    else if(strcmp(e,"sunday")==0)
		    j=7;
		}
		int p=j-k;
		if(p==0)
		{
			p=7;
			for(i=p+1;i<=r;i+=7)
		    {
			    if(i>=l&&i<=r)
			    count++;
		    }
		    if(l==1)
		    count++;
		}
		else if(p<0)
		p+=7;
		for(i=p+1;i<=r;i+=7)
		{
			if(i>=l&&i<=r)
			count++;
		}
		if(count==1)
		printf("%d\n",p+1);
		else if(count==0)
		printf("impossible\n");
		else
		printf("many\n");
	}
}
