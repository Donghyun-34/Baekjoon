#include <stdio.h>
#include <string.h>

int main()
{
	char word[1000001];
	int num['a'-'A']={0}, i, max=0, pot=0, cot=0, len;
	
	gets(word);
	len=strlen(word);
	
	for(i=0; i<len; i++)
	{
		if(word[i]<='Z')
			num[word[i]-'A']+=1;
		else
			num[word[i]-'a']+=1;
	}
	max=num[0];
	for(i=1;i<'a'-'A';i++)
	{
		if(max<=num[i])
		{
			if(max==num[i])
			{
				cot++;
				pot=i;
			}
			else if(max<num[i])
			{
				cot=0;
				pot=i;
				max=num[i];
			}
		}
	}
	if(cot>0)
		printf("?");
	else
		printf("%c", pot+'A');
	return 0;
}
