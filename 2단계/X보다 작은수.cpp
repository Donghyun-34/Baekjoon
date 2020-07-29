#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len, num, i ,j=0;
	int *str, *res;
	
	scanf("%d %d", &len, &num);
	str=(int *)malloc(sizeof(int)*len);
	res=(int *)malloc(sizeof(int)*len);
	if(str==NULL || res==NULL)
	{
		return -1;
	}
	
	for(i=0;i<len;i++)
	{
		scanf("%d", &str[i]);
		if(str[i]<num)
		{
			res[j]=str[i];
			j++;
		}
	}
	
	for(i=0; i<j; i++)
	{
		printf("%d ", res[i]);
	}
	free(str);
	free(res);
	
	return 0;
}
