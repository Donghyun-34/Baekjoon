#include <stdio.h>

int main()
{
	int num[100], count, sum=0;
	
	scanf("%d", &count);
	getchar();
	for(int i=0; i<count ; i++)
	{
		num[i]=getchar();
		sum+=num[i]-48;// 공백없이 입력된 숫자들을 문자로 입력 받았기 때문에 아스키 코드값을 빼준다.(문자 0은 아스키코드 48이다.) 
	}
	printf("%d", sum);
	
	return 0;
}
