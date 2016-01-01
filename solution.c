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
		int isnineseries=1,i=0,length;
		c=getchar();
		while( c >= '0' && c <= '9')
		{	
			if( c =='9' && isnineseries==1 ) 
				isnineseries=1;
			else 
			 isnineseries=0;

			k[i++]=c;
			c=getchar();
		}
		k[i]='\0';
		length=i;
		puts(k);
		putchar('/');
		if(isnineseries)
		{
			int j=0;
			k[j]='1';
			for(j=1;k[j];j++)
				k[j]='0';
			k[j++]='1';
			k[j]='\0';
		}
		else 
		{
			int i=length/2-1,j=length/2,larger=0,carryset=0;
			if(length%2!=0)
			{
			    j++;
			    if(k[i] > k[j])
			    {   k[j]=k[i];
			        larger=1;
			        carryset=0;
			    }
			    else if(k[i] <= k[j])
			    {
			        k[length/2]++;
			        k[j]=k[i];
			        larger=1;
			        carryset=0;
			    }
			    j++;
			    i--;
			}
			while( i >= 0 && j < length )
			{
				if(!larger)
				{
				    if(k[i]==k[j] ) // when two are equal
				   {   if( k[i]=='9')
				        {
				            larger=0;
				            k[i]='0';
				            carryset=1;
				        }
				        else 
				        {
				            k[i]++;
				            larger=1;
				            carryset=0;
				        }
				    }
				    else 
				    {   
				        if(carryset && k[i] > k[j])
				        {   
				            k[i]++;
				            k[j]++;
				            carryset=0;
				        } 
				        if(k[i] < k[j])
				            k[i]++;
				        larger=1;
				        
				    }
				}
				k[j]=k[i];
				j++;
				i--;
			}
		}
	    
		puts(k);//solution
	}
	return 0;
	//git@github.com:Madankapoor/NumberPalindrome.git
}
