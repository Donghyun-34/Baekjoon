#include <stdio.h> 
int main()
{
	int x, y, i, num, count, temp=0;

	scanf("%d", &count);
	for(i=0;i<count;i++)
	{
		scanf("%d %d %d", &x, &y, &num);
		if(num<x || num%x==0)
		{
			if(num<x)
				printf("%d01\n", num);
			else
				if(num/x>=10)
					printf("%d%d\n", x, num/x);
				else
					printf("%d0%d\n", x, num/x);
		}
		else
		{
			temp=num%x;
			num=num/x+1;
			if(num<10)
				printf("%d0%d\n", temp, num);
			else
				printf("%d%d\n", temp, num);
		}
	}
	
	return 0;
}
