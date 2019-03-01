#include<bits/stdc++.h>
void happy(int arr[],char str[],int k,int n,int q)
{
	int i,c,l,max,j;
	for(i=0;i<=q;i++)
   {
       c=0,max=0;
	   if(str[i]=='?')
       { 
           for(j=0;j<n;j++)
           {
               if(arr[j]==1)
               c++;
               else if(arr[j]==0)
               {
                   if(c>=max)
                   max=c;
                   c=0;
               }
               if(c>max)
               max=c;
           }
           if(max<=k)
           printf("%d\n",max);
           else
           printf("%d\n",k);
       }
       else if(str[i]=='!')
       {
           l=arr[n-1];
           for(j=n-1;j>=1;j--)
           {
               arr[j]=arr[j-1];
           }
           arr[0]=l;
       }
   }
}
int main()
{
   int n,q,k;
   scanf("%d%d%d",&n,&q,&k);
   int arr[n],i;
   char str[q+1];
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   scanf("%s",str);
   happy(arr,str,k,n,q);
   return 0;
}
