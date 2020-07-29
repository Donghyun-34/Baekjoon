#include <stdio.h>

int main()
{
	char a;
	
	while(1)
	{
		scanf("%c", &a);// scanf는 \n를 가져오지 않고 버퍼에 남겨두고 뒤에 오는 입력 때 가져온다.
		getchar(); 
		printf("%d\n", a);
	}
	return 0;
}
