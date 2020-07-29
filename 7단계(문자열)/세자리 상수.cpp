#include <stdio.h>

int swap(int num)
{
	int temp=0;
	
	temp=(num%10)*100+((num%100)/10)*10+num/100;
	return temp;
}

int main()
{
	int num1, num2;
	
	scanf(" %d %d", &num1, &num2);
	num1=swap(num1);
	num2=swap(num2);
	printf("%d", num1>num2?num1 :num2);
	return 0;
}
