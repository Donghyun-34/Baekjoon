/*#include <stdio.h>

int primary(int num)
{
	int i;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return num;
}

int main()
{
	int num, i, pri[1229],sum=0,a, b, cnt=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	if(a==1)
		a=2;
	for(i=a; i<=b; i++)
	{
		num=primary(i);
		sum+=num;
		if(num!=0)
		{
			pri[cnt]=num;
			cnt++;
		}
	}
	if(sum==0)
		printf("-1");
	else 
		printf("%d\n%d", sum, pri[0]);
	return 0;
}	20ms*/
#include <stdio.h>
int cnt=0;
//16ms
int primary(int num, int *pri)
{
	int i;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	pri[cnt]=num;
	cnt++;
	return num;
}

int main()
{
	int num, i, pri[1229],sum=0,a, b, cnt=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	if(a==1)
		a=2;
	for(i=a; i<=b; i++)
	{
		sum+=primary(i, pri);
	}
	if(sum==0)
		printf("-1");
	else 
		printf("%d\n%d", sum, pri[0]);
	return 0;
}
