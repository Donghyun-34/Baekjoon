#include <stdio.h>

int main()
{
	int count, num[1000], temp, i, j;
	double res=0;
	
	scanf("%d", &count);
	for(i=0; i<count; i++)
	{
		scanf(" %d", &num[i]);
		res+=num[i];
	}
	temp=num[0];
	for(i=1;i<count;i++)
	{
		if(temp<num[i])
		temp=num[i];
	}
	/* 비교대상이 하나의 배열이면 굳이 정렬식을 쓰지 않아도 된다. 위의 방식으로 하면 더욱 간단하다. 
	for(j=1; j<count-i; j++)
		{
			if(num[i]<num[i+j])
			{
				temp=num[i];
				num[i]=num[i+j];
				num[i+j]=temp;
			}
		}
	*/
	res=(double)((res/temp)*100)/count;
	printf("%.6lf", res);
	
	return 0;
}
