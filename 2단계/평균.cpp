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
	/* �񱳴���� �ϳ��� �迭�̸� ���� ���Ľ��� ���� �ʾƵ� �ȴ�. ���� ������� �ϸ� ���� �����ϴ�. 
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
