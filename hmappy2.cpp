#include<bits/stdc++.h>
long long int hcf(long long int a,long long int b)
{
    long long int rem=a%b;
    if(rem==0)
    return b;
    else
    return hcf(b,rem);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,a,b,total=0,lcm,gcd;
		scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
		gcd=hcf(a,b);
        lcm=(a*b)/gcd;
		total=(n/a)+(n/b)-2*(n/lcm);
		if(total>=k)
		printf("Win\n");
		else
		printf("Lose\n");
	}
}
