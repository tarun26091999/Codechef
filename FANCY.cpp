#include<bits/stdc++.h>
main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    while(t--)
    {
    	char str[103];
        char word[]=" not ";
        int count=0,strLen,wordLen,i,j,found;
        scanf("%[^\n]s",str+1);
		fflush(stdin);
		str[0]=' ';
        strLen=strlen(str);
        str[strLen]=' ';
        for(i=0;i<strLen-3;i++)
        {
            found=1;
            for(j=0;j<5;j++)
            {
                if(str[i+j]!=word[j])
                {
                    found=0;
                }
            }
            if(found==1)
            {
            	printf("Real Fancy\n");
            	count++;
            	break;
			}
            else
            continue;
        }
        if(count==0)
        printf("regularly fancy\n");
	}
}
