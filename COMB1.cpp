#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int k,e,d,l,r;
		scanf("%lld%lld",&l,&r);
		if(l!=r)
		{
			k=(r*(2+(r-1)*2))/2;
			e=(l*(2+(l-1)*2))/2;
			d=k-e+1+(l-1)*2;
		}
		else
		{
			d=1+(l-1)*2;
		}
		printf("%lld\n",d);
	}
}
