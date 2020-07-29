#include <stdio.h>

int main()
{
	int count, i, sum=0;
	
	scanf("%d", &count);
	for(i=0; i<count; i++)
	{
		sum+=i+1;
	}
	printf("%d", sum);
	return 0;
 } 
