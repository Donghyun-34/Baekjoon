/*
������: �赿��
���� ��¥: 2019.05.02
�ε� ���� : �ܾ� ����. 
������ ���� : ���������� ����. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void compare(char *word[], int count)
{
	int i=0, j=0;
	char temp[51];
	
	for(i=0;i<count;i++)
	{
		for(j=1;j<count-i;j++)
		{
			if(strlen(word[i])>strlen(word[i+j])) // ���ڿ��� ���̸� �������� 1�� 1�к� �ǽ�. 
			{
				strcpy(temp, word[i]);
				strcpy(word[i], word[i+j]);
				strcpy(word[i+j], temp);
			}
			else if(strlen(word[i])==strlen(word[i+j]))
			{
				if(strcmp(word[i],word[i+j])==0) //1�� �к����� ���� ���η� 2�� �к�. 
				{
					strcpy(word[i+j], "same");// �� ���ڿ��� �����ϸ� "same"�̶�� ���ڿ��� ��ü. 
				}
				else if(strcmp(word[i], word[i+j])>0)
				{
					strcpy(temp, word[i]);
					strcpy(word[i], word[i+j]);
					strcpy(word[i+j], temp);
				}
			}
		}
	}
}

int main()
{
	char **word;
	int count=0, i;
	
	scanf("%d", &count);
	word=(char **)malloc(sizeof(char *)*(count+1));
	for(i=0; i<count; i++)
	{
		word[i]=(char *)malloc(sizeof(char)*51);
		scanf("%s", word[i]);
	}
	compare(word, count);
	for(i=0; i<count; i++)
	{
		if(strcmp(word[i], "same")!=0) // ��� ��½ÿ� �ߺ��Ǵ� ���ڿ����� ������� �ʴ´�. 
			printf("%s\n", word[i]);
	}
	
	return 0;
}
