#include<bits/stdc++.h>
void game(int *,int ,int ,int);
main()
{
    int t;
	scanf("%d",&t);
	while (t--)
	{
	    int n,a,b;
	    scanf("%d",&n);
	    scanf("%d",&b);
	    scanf("%d",&a);
	    int arr[n],i;
	    for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    std::sort(arr,arr+n);  
	    game(arr,b,a,n);
	}
}
void game(int arr[],int b,int a,int n)
{
	    int i,bob=0,ali=0;
		for(i=0;i<n;i++)
	    {
	        if((arr[i])%b==0)
	        bob++;
	        else if((arr[i])%a==0)
	        ali++;
	    }
	    if(bob>ali)
	    printf("BOB\n");
	    else
	    {
	    	if(bob==ali)
	        printf("ALICE\n");
	        else if(ali>bob)
	        printf("ALICE\n");
		}
}
