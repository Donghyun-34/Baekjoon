#include <stdio.h>

int main()
{
	int num[1000], n, i, j, q, temp;
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(num[i]>num[i+j])
			{
				temp=num[i];
				num[i]=num[i+j];
				num[i+j]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("%d\n", num[i]);
		
	return 0;
}
