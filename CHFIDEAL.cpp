#include<bits/stdc++.h>
int randNum(int min,int max)
{
   return rand()%max+min;
}
main()
{
   int i,x,y,z;
   int arr[3]={0,0,0};
   srand(time(0));
   x=randNum(1,3);
   arr[x-1]++;
   printf("%d\n",x);
   fflush(stdout);
   scanf("%d",&y);
   arr[y-1]++;
   fflush(stdout);
   for(i=0;i<3;i++)
   {
   	    if(arr[i]==0)
   	    printf("%d\n",i+1);
   	    fflush(stdout);
   }
}
