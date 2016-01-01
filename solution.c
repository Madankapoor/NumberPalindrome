#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000000
char k[MAXSIZE+2];

int twopalindromehandler(int i,int j) // returns 0 on no carry
// returns 1 on carry
{


	
}

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
		int isnineseries=1,ispalindrome=1,i=0,length;
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
			int i=length/2,j=length/2+1,carryset=0;
			while( i >= 0 && j < length )
			{
				if((k[i]-k[j])!=0)
				{	ispalindrome=0;
					twopalindromehandler(i,j);
				}
			}
			
		}
		else
		{
			
		}
		puts(k);//solution
	}
	return 0;
	//git@github.com:Madankapoor/NumberPalindrome.git
}
