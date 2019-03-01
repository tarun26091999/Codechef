 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
	scanf("%d\n",&T);
	while (T--)
	{
	    int n,i,j,c=0,s=0; 
	    scanf("%d",&n);
	    int p[n],k=0,pr[10000],n1=0,count=0;
	    for(i=0;i<n;i++)
	     p[i]=0;
	    for(i=1;i<=n;i++)
	    {
	        c=0;
	        for(j=1;j<=i;j++)
	        {
	        if(i%j==0)
	        c++;
	        }
	        if(c==2)
	        {
	        p[k]=i;
	        k++;
	        }
	    }
	    
	    for(i=0;i<k;i++)
	     {
	         for(j=i+1;j<k;j++)
	         {
	             pr[n1]=p[i]*p[j];
	             n1++;
	         }
	     }
	     for(i=0;i<n1;i++)
	     {
	          for(j=0;j<n1;j++)
	          {
	              s=pr[i]+pr[j];
	              if(s==n)
	              count++;
	          }
	     }
	    if(count>=1)
	    printf("YES\n");
	    else
	    printf("NO\n");
    }
    return 0;
}
