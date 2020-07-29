#include <stdio.h>
#include <stdlib.h>

int check(int num);

int main()
{
	int *num;
	int n=0, i, count=0;
	
	scanf("%d", &n);
	num=(int *)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	{
		num[i]=i+1;
	}
	
	for(i=0; i<n; i++)
	{
		if(num[i]<100)
		{
			count++;
		}
		else if(num[i]<1000)
		{
			count+=check(num[i]);
		}
	}
	
	printf("%d", count);
	free(num);
	return 0;
}

int check(int num)
{
	int tempN=num/100, tempM=(num%100)/10, tempL=num%10;
	
	if((tempM-tempN)==(tempL-tempM))
		return 1;
	else
		return 0;
}
