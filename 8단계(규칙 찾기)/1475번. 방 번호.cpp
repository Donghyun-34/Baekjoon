#include <stdio.h>
#include <string.h>

int main()
{
	char num[8];
	int len, count[10]={0}, i, max=0, cnt;
	
	scanf("%s", num);
	len=strlen(num);
	for(i=0; i<len; i++)
	{
		count[num[i]-'0']+=1;
		if(max<count[num[i]-'0'])
		{
			max=count[num[i]-'0'];
			cnt=num[i]-'0';
		}
			
	}
	
	if(cnt==6 || cnt==9)
	{
		max=count[6]+count[9];
		printf("%d", max/2+max%2);
	}
		
	else
		printf("%d", max);
	return 0;
}
