#include<bits/stdc++.h>
main()
{
    int t;
	scanf("%d",&t);
	while (t--)
	{
	   int n,i,count=0; 
	   scanf("%d",&n);
	   int arr[n];
	   for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
       for(i=0;i<n-1;i++)
       {
            if(arr[i+1]>=arr[i])
            continue;
            else 
            count++;
	   }
	   if(count==0)
	   printf("YES\n");
	   else if(count>1)
	   printf("NO\n");
	   else
	   {
	   	    if(arr[0]>=arr[n-1])
	   	    printf("YES\n");
	   	    else
	   	    printf("NO\n");
	   }
    }
}
