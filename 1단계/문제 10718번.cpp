/*
	������ : �赿��.
	���� : ���� ���. 
	���� ��ó : ���� ����.
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
