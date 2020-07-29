#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	int i=1, j=0;
	
	scanf("%s", word);
	
	for(i=1; i<=strlen(word); i++)// char 배열에는 한칸에 하나의 문자가 입력된다. 
	{
		printf("%c", word[i-1]);
		j++;
		if(j%10==0)
		{
			printf("\n");
			j=0;
		}
	}
	return 0;
}
