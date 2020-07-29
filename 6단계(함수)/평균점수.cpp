#include <stdio.h>

int main()
{
	int num[5], i=0, avg=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d", &num[i]);
	}
	for(i=0; i<5; i++)
	{
		if(num[i]<40)
		{
			num[i]=40;
			avg+=40;
		}
		else
			avg+=num[i];
	}
	printf("%d", avg/5);
	return 0;
}
