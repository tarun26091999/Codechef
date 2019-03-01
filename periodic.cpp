#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int gcd(int,int);
main()
{
	int t,i,j,n,count;
	int f,st,cc,p,res,val;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		count=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]!=-1)
		    count++;
		}
		if(count<=1)
		printf("inf\n");
		else
		{
			f=-1;
			st;
			cc;
			p=-1;
			res=-1;
			val;
			vector<int> x;
			for(i=0;i<n;i++)
			{
				if(arr[i]!=-1)
				{
					if(f==-1)
					{
						f=arr[i];
						cc=f;
						p=i;
						st=i;
					}
					else
					{
						if(arr[i]>f)
						{
							if(arr[i]!=cc)
							{
								res=0;
								break;
							}
						}
						else
						{
							res=1;
							val=i-arr[i]-p+f;
							break;
						}
						f=arr[i];
						p=i;
					}
				}
				if(f!=-1)
				cc++;
			}
			
			if(i==n)
			{
				printf("inf\n");
			}
			else if(res==0)
			{
				printf("impossible\n");
			}else
			{
				p=st;
				cc=arr[p];
				for(i=p;i<n;i++)
				{
					if(arr[i]!=-1)
					{
						if(arr[i]>val)
						{
							break;
						}
						else
						{
							if(cc-arr[i]!=0)
							x.push_back(cc-arr[i]);
						}
					}
					cc++;
				}
				if(i!=n)
				{
					printf("impossible\n");
				}
				else
				{
					
					int gc=x[0];
					for(i=1;i<x.size();i++)
					{
						gc=gcd(gc,x[i]);
					}
					cc=arr[p]-1;
					for(i=p;i<n;i++)
					{
						if(arr[i]!=-1)
						{
							if(arr[i]!=(cc%gc+1))
							break;
						}
						cc++;
					}
					if(i==n)
					{
						printf("%d\n",gc);
					}
					else
					{
						printf("impossible\n");
					}	
				}
			}
		}
	}
}
int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
