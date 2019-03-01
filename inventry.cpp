#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,count=0;
		scanf("%d",&n);
		char arr[n+1],arr1[n+1];
		scanf("%s",arr);
		//printf("%s",arr);
		strcpy(arr1,arr);
		for(i=0;i<n;i++)
		{
			if(arr1[i]=='#')
			arr1[i]='35';
			else
			arr1[i]='46';
		}
		std::sort(arr1,arr1+n);
		while(strcmp(arr1,arr)!=0)
		{
		    for(i=0;i<n-2;i++)
		    {
			    if(arr[i]=='.'&&arr[i+2]=='.'&&arr[i+1]=='#')
			    {
				    arr[i]=='#';
				    arr[i+1]=='.';
				    count++;
			    }
			    else if(arr[i]=='#'&&arr[i+2]=='.'&&arr[i+1]=='.')
			    {
				    arr[i]='.';
				    arr[i+1]='#';
				    count++;
			    }
		    }
		}
		printf("%d\n",count);
	}
}
