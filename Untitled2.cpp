#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int cou(int);
main()
{
	int t,i,j,n;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c,ans;
		scanf("%d%d%d",&a,&b,&c);
		int na=0,nb=0,nc=0;
		int ka=a,kb=b,kc=c;
		while(kb)
		{
			if(kb&1)
			nb++;
			kb/=2;
		}
		while(ka)
		{
			if(ka&1)
			na++;
			ka/=2;
		}
		while(kc)
		{
			if(kc&1)
			nc++;
			kc/=2;
		}
		ans=0;
		for(i=pow(2,na)-1;i<=c;i++)
		{
			if(cou(i)==na&&cou(c-i)==nb)
			ans++;
		}
		printf("%d\n",ans);
	}
}
int cou(int a)
{
	int c=0;
	while(a)
	{
		c+=a&1;
		a>>=1;
	}
	return c;
}
