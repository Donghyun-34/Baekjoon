#include <stdio.h>
#include <string.h>

int count(char *str)
{
	int i=0, sco=0, cnt=0;
	
	for(i=0; i<strlen(str);i++)
	{
		if(str[i]=='o' || str[i]=='O')
		{
			cnt++;
			sco+=cnt;
		}
		else if(str[i]=='x' || str[i]=='X')
		{
			cnt=0;
		}
	}

	return sco;
}

int main()
{
	char str[81];
	int i, num;
	
	scanf("%d", &num);

	for(i=0; i<num; i++)
	{
		scanf("%s", str);
		printf("%d\n", count(str));
	}

	return 0;
}
