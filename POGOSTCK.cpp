#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,j,i,max1=-2000000000,sum=0;
		scanf("%d%d",&n,&k);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=n-1;i>=max(0,n-k);i--)
		{
			sum=0;
			for(j=i;j>=0;j-=k)
			{
				sum+=arr[j];
                if(sum>max1)
			    max1=sum;
			}
		}
		printf("%d\n",max1);
	}
}
