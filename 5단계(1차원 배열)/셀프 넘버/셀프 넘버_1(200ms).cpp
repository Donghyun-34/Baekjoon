#include <stdio.h>

int main()
{
	int i,j, count=0;
	
	for(i=1; i<=10000; i++)
	{
		count=0;
		for(j=1; j<=10000; j++)
		{
			if(j<=99)
			{
				if(i==(j+j/10+j%10))
				{
					count++;
					break;
				}
			}
			else if(j<=999)
			{
				if(i==(j+j/100+(j%100)/10+(j%100)%10))
				{
					count++;
					break;
				}
			}
			else if(j<=9999)
			{
				if(i==(j+j/1000+(j%1000)/100+(j%100)/10+(j%100)%10))
				{
					count++;
					break;
				}
			}
		}
		if(count==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
