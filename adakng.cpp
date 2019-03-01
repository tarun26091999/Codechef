#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k,i,j,n;
	scanf("%d",&t);
	while(t--)
	{
		cin>>i>>j>>k;
		cout<<(min(8,j+k)-max(1,j-k)+1)*(min(8,i+k)-max(1,i-k)+1)<<endl;
	}
}
