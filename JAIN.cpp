#include<bits/stdc++.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char str[n][1001];
		int i,j,k,l,w,counter=0;
		for(i=0;i<n;i++)
		scanf("%s",str[i]);
		for(i=0;i<n-1;i++)
		{
			int arr1[124]={0};
			for(j=0;j<strlen(str[i]);j++)
			{
				if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
				arr1[str[i][j]+1]++;
			}
			for(k=i+1;k<n;k++)
			{
				int arr2[124]={0},count=0;
			    for(l=0;l<strlen(str[k]);l++)
			    {
			    	if(str[k][l]=='a'||str[k][l]=='e'||str[k][l]=='i'||str[k][l]=='o'||str[k][l]=='u')
					arr2[str[k][l]+1]++;
				}
			    for(w=0;w<123;w++)
			    {
			    	arr2[w]+=arr1[w];
			    	if(arr2[w]>=1)
			    	count++;
				}
				if(count==5)
				counter++;
			}
		}
		printf("%d\n",counter);
	}
}
