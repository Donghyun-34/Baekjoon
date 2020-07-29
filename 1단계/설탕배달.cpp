#include <stdio.h>

int main()
{
	int num, res=0;	
	scanf("%d", &num);
	while(num>0)
	{
		if(num%5==0)
		{
			num-=5;
			res++;
		}
		else if(num%3==0)
		{
			num-=3;
			res++;
		}
		else if(num>5)
		{
			num-=5;
			res++;
		}
		else
		{
			res=-1;
			break;
		}
	}
	printf("%d", res);
	return 0;
}
