#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,count=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	    int pos[n+1];
	    for(i=0;i<=n;i++)
	    pos[i]={-1};
	    for(i=0;i<n;i++)
	    {
	    	if(pos[arr[arr[i]-1]]==-1)
	    	pos[arr[arr[i]-1]]=arr[i];
	    	else 
	    	{
	    		if(pos[arr[arr[i]-1]]!=-1&&pos[arr[arr[i]-1]]==arr[i])
				continue;
				else
				{
					count++;
					printf("Truly Happy\n");
					break;
				}
			}	
		}
		if(count==0)
		printf("Poor Chef\n");
	}
}
