#include <stdio.h>

int main()
{
	int num=0, i;
	
	scanf("%d", &num);
	if(num>100000)
	{
		return -1;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n", i+1);
	}
	return 0;
}
