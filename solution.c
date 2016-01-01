#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000000
char k[MAXSIZE+2];

int main()
{
	int t=0;
	char c=getchar();
	while( c >= '0' && c <= '9' )
	{	
		t=(t<<3)+(t<<1)+c-'0';
		c=getchar();
	}
	while(t--)
	{	
		int isnineseries=1,ispalindrome,i=0,length;
		c=getchar();
		while( c >= '0' && c <= '9')
		{	
			if( c =='9' ) 
				isnineseries=1;
			else 
				isnineseries=0;
			
			k[i++]=c;
			c=getchar();
		}
		k[i]='\0';
		length=i;
		if(isnineseries)
		{
			int j=0;
			k[j]='1';
			for(j=1;k[j];j++)
				k[j]='0';
			k[j++]='1';
			k[j]='\0';
		}
		else if(length%2==0)
		{
			
			puts(k);
		}
		else
		{
			
		}
	}
	return 0;
}
