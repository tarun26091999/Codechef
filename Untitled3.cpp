#include<bits/stdc++.h>
using namespace std;
int block(int i,int j,int k)
{
	int l=(min(8,i+k)-max(1,i-k)+1)*(min(8,j+k)-max(1,j-k)+1);
	return l;
}
int main()
{
	int t,k,i,j,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&i,&j,&k);
		int o=block(i,j,k);
		printf("%d\n",o);
	}
}
