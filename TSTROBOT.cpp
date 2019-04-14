#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,x,count=0,count1=0;
		scanf("%d%d",&n,&x);
		int k=x,l=0;
		char str[n];
		int arr[n]={0};
		scanf("%s",str);
		for(i=0;i<n;i++)
		{
			if(str[i]=='L')
			{
				x-=1;
				arr[i]=x;
				count++;
			}
			else if(str[i]=='R')
			{
				x+=1;
				arr[i]=x;
				count++;
			}
		}
		std::sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
			count1++;
			if(arr[i]==k)
			l=1;
		}
		if(l==1)
		{
			printf("%d\n",count-count1);
		}
		else
		printf("%d\n",count+1-count1);
	}
}
