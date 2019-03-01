#include<bits/stdc++.h>
int subArray(int *,int);
int median(int *);
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		subArray(arr,n);	
	}
}
int subArray(int arr[],int n) 
{  
	int arr1[n],l,m,i,j;
	for(i=0;i<n;i++) 
	{  
		for(j=i;j<n;j++) 
		{  
			for(int k=i,z=0;k<=j,z<=j;k++,z++)   
            arr1[z]=arr[k];
            m=median(arr1);
			//printf("%d\n",m); 
		}
	} 
}
int median(int arr1[])
{
	int i,j,med,n,count;
	//int arr1[n];
	if((j-i+1)%2!=0)
	{
		med=arr1[(j-i+1)/2];
		for(i=0;i<n;i++)
		{
			if(med==arr1[i])
			count++;
		}
	}
	else if((j-i+1)%2==0)
	{
		med=arr1[(j-i+1)/2]+arr1[((j-i+1)/2)-1];
		for(i=0;i<n;i++)
		{
			if(med==arr1[i])
			count++;
		}
	}
	printf("%d\n",count);
}
