#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, num1, num2, cnt=0;
	int arr[10001]={0};
	
	scanf("%d %d", &num1, &num2);
	for(i=2; i<=sqrt(num2); i++)
	{
		for(j=i+i;j<=num2;j+=i)
		{
			arr[j]=1;
		}
	}
	if(num1==1)
		num1=2;
	for(i=num1; i<=num2; i++)
	{
		if(arr[i]==0)
		{
			printf("%d\n", i);
			cnt++;
		}
	}
	if(cnt==0)
		printf("-1");
	
	return 0;
}
