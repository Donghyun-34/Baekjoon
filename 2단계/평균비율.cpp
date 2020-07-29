#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count=0, num=0, i, sco, sum;
	int *p;
	double avr_sco=0, avr_stu=0;
	char a='%';
	
	scanf("%d", &count);
	
	while(count>0)
	{
		sum=0;
		sco=0;
		scanf("%d", &num);
		p=(int *)malloc(sizeof(int)*(num));
		if(p==NULL)
		{
			printf("error\n");
			return 0;
		}
		for(i=0; i<num; i++)
		{
			scanf("%d", &p[i]);
			sum+=p[i];
		}
		avr_sco=(double)sum/num;
		for(i=0; i<num; i++)
		{
			if(p[i]>avr_sco)
			{
				sco++;
			}
		}
		avr_stu=((double)sco/num)*100;
		printf("%.3lf%c\n", avr_stu, a);
		count--;
	}
	
	free(p);
	return 0;
}
