#include <stdio.h>

int main()
{
	char a;
	
	while(1)
	{
		scanf("%c", &a);// scanf�� \n�� �������� �ʰ� ���ۿ� ���ܵΰ� �ڿ� ���� �Է� �� �����´�.
		getchar(); 
		printf("%d\n", a);
	}
	return 0;
}
