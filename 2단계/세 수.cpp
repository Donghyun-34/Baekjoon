#include <stdio.h>

int main()
{
	int num[3], temp;
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for(int i=0; i<3; i++)
	{
		for(int j=1; j<3-i; j++)
		{
			if(num[i]>num[i+j])
			{
				temp=num[i];
				num[i]=num[i+j];
				num[i+j]=temp;
			}
		}
	}
	printf("%d", num[1]);
	return 0;
}
