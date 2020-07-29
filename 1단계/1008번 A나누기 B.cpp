/*
	만든 사람 : 김동현(akakak413@naver.com)
	만단 날짜 : 2018년 11월 8일
	코드 내용 : 나눗셈 구현. 
	문제 출처 : 백준 알고리즘(1008번 A/B) 
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
