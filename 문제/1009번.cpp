#include <stdio.h>

int main()
{
	int a,b,i, cnt;
	long long int num; 
	
	scanf("%d", &cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d %d", &a, &b);
		num=a;
		for(b;b>1;b--)
		{
			num=num*a%10;
		}
		printf("%d\n", num%10>0? num%10 : 10);
	}
	
	return 0;
}
