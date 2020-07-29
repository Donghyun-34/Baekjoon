/*
	만든이 : 김동현.
	목적 : 문장 출력. 
	문제 출처 : 백준 저지.
*/
#include <stdio.h>

int main()
{
	char str1[100];
	
	while(scanf("%[^\n]s", str1)!=EOF)
	{
		getchar();
		printf("%s\n", str1);
	}
	
	return 0;
}
