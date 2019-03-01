#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
	scanf("%d",&t);
	while (t--)
	{
	    int n,m,r,c,k,count=0,i,j;
	    scanf("%d%d%d%d%d",&n,&m,&r,&c,&k);
	    k=k+1;
	    while(k--)
	    {
	        for(i=1;i<=n;i++)
	        {
	            for(j=1;j<=m;j++)
	            {
	                if((r+c==i+j)||(r-c==i-j))
	                count++;
	            }
	        }
	    r=r+1;
	    c=c+1;
	    }
	    printf("%d\n",count);
	}
}
