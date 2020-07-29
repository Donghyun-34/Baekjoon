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
	int i, num[10037];
	
	for(i=0;i<10000;i++)
		num[i]=1;
		
	for(i=1; i<=10000; i++)
	{
		num[dn(i)]=0;
	}
	
	for(i=1; i<10000; i++)
	{
		if(num[i]==1)
			printf("%d\n", i);
	}
	return 0;
}
