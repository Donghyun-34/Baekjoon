#include <stdio.h>

int main()
{
	int num[8], i, cnt=1;
	
	for(i=0;i<8;i++)
	{
		scanf("%d", &num[i]);
	}
	if(num[0]==1 || num[0]==8)
	{
		if(num[0]==8)
		{
			for(i=1; i<8; i++)
			{
				if(num[i-1]-1!=num[i])
				{
					cnt=0;
					break;
				}
				
			}
			if(cnt==1)
				printf("descending");
		}
		else
		{
			for(i=1; i<8; i++)
			{
				if(num[i-1]+1!=num[i])
				{
					cnt=0;
					break;
				}
				
			}
			if(cnt==1)
				printf("ascending");
		}
		if(cnt==0)
			printf("mixed");
	}
	else
		printf("mixed");
	
	return 0;
}
