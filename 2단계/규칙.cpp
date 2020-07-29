#include <stdio.h>

int main()
{
	int n, answer, temp, tempN, tempM, count=0;
	
	scanf("%d", &n);
	answer=n;
	do{
		tempN=n/10;
		tempM=n%10;
		temp=(tempN+tempM)%10;
		n=tempM*10+temp;
		printf("%d\n", n);
		count++;
	}while(answer!=n);
	
	printf("%d", count);
	
	return 0;
}
