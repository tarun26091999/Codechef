#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
bool prime(int a,int b)
{
	int i=2;
	for(i=2;i<=min(a,b);i++)
	{
		if((a%i==0)&&(b%i==0))
		return false;
	}
	return true;
}
bool trial(int arr[],int n)
{
	int i,j;
	vector<int> v;
	int p=0;
	v.push_back(arr[0]);
	int d[n]={0};
	d[0]=1;
	while(p<v.size())
	{
		for(j=0;j<n;j++)
		{
			if(d[j]==0)
			{
				if(prime(v[p],arr[j]))
				{
					d[j]=1;
					v.push_back(arr[j]);			
				}
			}
		}
		p++;
	}
	
	if(v.size()==n)
	return true;
	return false;
}
main()
{
	int t,i,j,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		if(trial(arr,n))
		{
			printf("0\n");
			for(i=0;i<n;i++)
			printf("%d ",arr[i]);
			printf("\n");
		}
		else
		{
			int c=0;
			for(i=0;i<n;i++)
			if(arr[i]==47)
			c++;	
			if(c>=1&&c<n)
			{
				printf("0\n");
				for(i=0;i<n;i++)
				printf("%d ",arr[i]);
				printf("\n");
			}
			else if(c==0)
			{
				printf("1\n");
				arr[0]=47;
				for(i=0;i<n;i++)
				printf("%d ",arr[i]);
				printf("\n");
			}
			else
			{
				printf("1\n");
				arr[0]=2;
				for(i=0;i<n;i++)
				printf("%d ",arr[i]);
				printf("\n");
			}
		}
	}
}

