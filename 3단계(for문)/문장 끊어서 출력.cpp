#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	int i=1, j=0;
	
	scanf("%s", word);
	
	for(i=1; i<=strlen(word); i++)// char �迭���� ��ĭ�� �ϳ��� ���ڰ� �Էµȴ�. 
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
