#include <stdio.h>

int main()
{
	int a,b,i,j, cnt, temp=0, count;
	long long int num; 
	
	scanf("%d", &cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d %d", &a, &b);
		num=a;
		temp=num%10;
		count=1;
		for(j=b;j>0;j--)
		{
			num*=a;
			if(temp==(num%10))
			{
				break;
			}
			count++;
		}
		b=b%count;
		if(b==0)
			b=count;
		num=a;
		for(i=1;i<b;i++)
		{
			num*=a;
		}
		printf("%d\n", num%10>0? num%10 : 10);
	}
	
	return 0;
}
