#include <stdio.h>
void init(int floor[][14])
{
	int i;
	for(i=0; i<15; i++)
		floor[i][0]=1;
	for(i=1;i<14;i++)
		floor[0][i]=i+1;
}

void count(int floor[][14])
{
	int i, j, q;
	
	for(i=1; i<=14; i++)
	{
		for(j=1; j<14; j++)
		{
			for(q=0; q<=j; q++)
			{
				floor[i][j]+=floor[i-1][q];
			}
		}
	}
}

int main()
{
	int floor[15][14]={0}, i, j,q, num, a, b, temp=1;

	init(floor);
	count(floor);
	scanf("%d", &num);
	while(num>0)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		num--;
		printf("%d\n", floor[a][b-1]);
	}
	
	return 0;
}
