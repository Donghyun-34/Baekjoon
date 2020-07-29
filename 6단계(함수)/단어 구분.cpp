#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	int i=0, count=0, len;
	
	gets(str);
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]==' ' && i!=0)
			count++;
	}
	if(str[i]!=' ' && str[i-1]!=' ')
		count++;
		
	printf("%d", count);
	return 0;
}
