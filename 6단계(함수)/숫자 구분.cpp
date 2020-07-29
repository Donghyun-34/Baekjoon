#include <stdio.h>
void count(int n, int *count);
int main()
{
	int num[3], sum=1, n, cnt[10]={0,0,0,0,0,0,0,0,0,0};
	
	for(int i=0; i<3; i++)
	{
		scanf("%d", &num[i]);
		sum*=num[i];
	}
	while(sum>0)
	{
		n=sum%10;
		sum/=10;
		count(n, cnt);
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d\n", cnt[i]);
	}
	return 0;
}

void count(int n, int *cnt)
{
	switch(n)
	{
		case 0:
			cnt[0]++;
			break;
		case 1:
			cnt[1]++;
			break;
		case 2:
			cnt[2]++;
			break;
		case 3:
			cnt[3]++;
			break;
		case 4:
			cnt[4]++;
			break;
		case 5:
			cnt[5]++;
			break;
		case 6:
			cnt[6]++;
			break;
		case 7:
			cnt[7]++;
			break;
		case 8:
			cnt[8]++;
			break;
		case 9:
			cnt[9]++;
			break;
		default:
			break;
	}
}
