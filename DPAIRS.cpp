#include<bits/stdc++.h>
main()
{
	long long int i,j,n,m;
	scanf("%lld %lld",&n,&m);
	long long int p=n*m;
	long long int k,count=0,arr[n],brr[m],sum[p]={0};
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	for(i=0;i<m;i++)
	scanf("%lld",&brr[i]);
	while(count<=(n+m-1))
	{
		for(i=0;i<n;i++)
	    {
		    for(j=0;j<m;j++)
		    {
			    k=arr[i]+brr[j];
			    sum[k]++;
			    if(sum[k]==1)
			    {
			    	printf("%d %d\n",i,j);
			        count++;
				}
		    }
	    }
	}
}
