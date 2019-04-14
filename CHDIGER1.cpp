#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void func(char n[],char d)
{
	int l=strlen(n),poi=0;
    char ch;
    string final="";
    while(poi!=l)
    {
        ch=n[poi];
        for(int i=poi+1;i<l;++i)
        {    
			if(ch>n[i])
            {
                ch=n[i];
                poi=i;
            }
        }
        if(ch<d)
		{
			final+=ch;
			poi++;
		}
        else 
		break;
    }
        cout<<final;
        int g=final.length();
        //printf("%d",g);
        for(int x=0;x<l-g;x++)
        printf("%c",d);
        printf("\n");
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
        char n[20];
        char d;
        cin>>n;
        cin>>d;func(n,d); 
	}
}
