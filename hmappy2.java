#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
   while(t--)
	{
		long long int n,a,b,k;
		scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
		long long int w=0,z=1,a1=a,b1=b,t;
	  while (b1 != 0) 
	 {
    t = b1;
    b1 = a1 % b1;
    a1 = t;
    }
     z = (a*b)/a1;
		w=(long long int)(n/a)+(long long int)(n/b)-(long long int)((n/z)*2);
		//printf("%lld ",z);
		if(w>=k)
		printf("Win\n");
		else printf("Lose\n");
	}
	return 0;
}
    
    
    
    