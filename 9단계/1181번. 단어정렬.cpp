/*
만든이: 김동현
만든 날짜: 2019.05.02
민든 목적 : 단어 정렬. 
적용한 개념 : 아직까지는 없음. 
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
			if(strlen(word[i])>strlen(word[i+j])) // 문자열의 길이를 기준으로 1차 1분별 실시. 
			{
				strcpy(temp, word[i]);
				strcpy(word[i], word[i+j]);
				strcpy(word[i+j], temp);
			}
			else if(strlen(word[i])==strlen(word[i+j]))
			{
				if(strcmp(word[i],word[i+j])==0) //1차 분별이후 동일 여부로 2차 분별. 
				{
					strcpy(word[i+j], "same");// 두 문자열이 동일하면 "same"이라는 문자열로 대체. 
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
		if(strcmp(word[i], "same")!=0) // 결과 출력시에 중복되는 문자열들은 출력하지 않는다. 
			printf("%s\n", word[i]);
	}
	
	return 0;
}
