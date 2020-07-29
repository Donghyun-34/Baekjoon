#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int cnt=0, re, i;
	char **str;
	
	scanf("%d", &cnt);
	str=(char **)malloc(sizeof(char *)*cnt);
	for(i=0; i<cnt; i++)
	{
		str[i]=(char *)malloc(sizeof(char)*21);
	}
	for(i=0; i<cnt; i++)
	{
		scanf(" %d", &re);
		getchar();
		gets(str[i]);
		for(int j=0; j<strlen(str[i]); j++)
		{
			for(int q=0; q<re; q++)
			{
				printf("%c", str[i][j]);
			}
		}
		printf("\n");
		
		free(str[i]);
	}
	free(str);
	return 0;
}
