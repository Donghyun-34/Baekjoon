#include <stdio.h>
#include <string.h>

int main()
{
	char word[16];
	int len, i, count=0, num;
	
	scanf("%s", word);
	len=strlen(word);
	for(i=0;i<len;i++)
	{
		num=word[i]-'A'+3;
		if(num==21 ||num==24)
			count+=(1+num/3);
		else if(num>=27)
			count+=10;
		else
			count+=(2+num/3);
	}
	printf("%d", count);
	return 0;
}
