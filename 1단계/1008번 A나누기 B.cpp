/*
	���� ��� : �赿��(akakak413@naver.com)
	���� ��¥ : 2018�� 11�� 8��
	�ڵ� ���� : ������ ����. 
	���� ��ó : ���� �˰���(1008�� A/B) 
*/
#include <stdio.h>

int main()
{
	int a, b;
	long double res=0;
	
	scanf(" %d %d", &a, &b);
	if(a<0 || b>10)
	{
		printf("error\n");
		return -1;
	}
	res=((double)a/b)*(0.000000000)+(double)(a%b)*(0.000000000);
	printf("%f", res);
	return 0;
}
