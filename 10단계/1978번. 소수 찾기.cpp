#include <stdio.h>
int primary(int num)
{
	int i;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int num, i, pri=0;
	
	for(i=0; i<300; i++)
	{
		scanf("%d", &num);
		if(primary(num))
			pri+=num;
	}
	return 0;
}
