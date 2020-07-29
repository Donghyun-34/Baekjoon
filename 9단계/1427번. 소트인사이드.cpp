#include <stdio.h>
#define swap(a,b) { int c; c=a; a=b; b=c;}

int main()
{
	int num, arr[10], i=0, j, len;
	scanf("%d", &num);
	while(num>0)
	{
		arr[i]=num%10;
		num=num/10;
		i++;
	}
	len=i;
	for(i=0;i<len;i++)
	{
		for(j=1;j<len-i;j++)
		{
			if(arr[i]<arr[i+j])
			{
				swap(arr[i], arr[i+j]);
			}
		}
	}
	for(i=0;i<len;i++)
		printf("%d", arr[i]);
	return 0;
}
