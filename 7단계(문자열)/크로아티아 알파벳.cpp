#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	int len,i, cnt=0;
	
	scanf("%s", word);
	len=strlen(word);
	for(i=0; i<len; i++)
	{
		if(word[i]=='c' && i+1!=len)
		{
			if(word[i+1]=='=' || word[i+1]=='-')
			{
				cnt++;
				i++;
			}
			else
				cnt++; 
		}
		else if(word[i]=='d' && i+1!=len)
		{
			if(word[i+1]=='-')
			{
				cnt++;
				i++;
			}
			else if(word[i+2]=='=' && i+2!=len)
			{
				cnt++;
				i+=2;
			}
			else
				cnt++;
		}
		else if((word[i]=='l' || word[i]=='n')&& i+1!=len)
		{
			if(word[i+1]=='j')
			{
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else if((word[i]=='s' || word[i]=='z') && i+1!=len)
		{
			if(word[i+1]=='=')
			{
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
