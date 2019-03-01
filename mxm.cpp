#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long int n,k,i,j,l,t=0,max=0,x=0,y=0;
       scanf("%ld  %ld",&n,&k);
       long int a[n];
       for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
       //sort(a,a+n);
       for(i=0;i<n;i++)
       a[i]=pow(k,a[i]);
       for(i=0;i<n-1;i++)
       {
            for(l=0;l<=i;l++)
            x+=a[l];
            for(j=i+1;j<n;j++)
            y+=a[j];
            if(x*y>max)
            {
                max=x*y;
                t=i;
            }
        }
        printf("%ld\n",t+1);
    }
    return 0;
}
