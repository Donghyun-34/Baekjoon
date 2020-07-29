#include <stdio.h>

int dn(int i)
{
	int sum=i;
	
	while(i!=0)
	{
		sum+=i%10;
		i/=10;
	}
	return sum;
}

int main()
{
	int i,j, count=0;
	
	for(i=1; i<=10000; i++)
	{
		count=0;
		for(j=1; j<=10000; j++)
		{
			if(i==dn(j))
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
