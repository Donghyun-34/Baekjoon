#include <stdio.h>

int main()
{
	int num[100], count, sum=0;
	
	scanf("%d", &count);
	getchar();
	for(int i=0; i<count ; i++)
	{
		num[i]=getchar();
		sum+=num[i]-48;// ������� �Էµ� ���ڵ��� ���ڷ� �Է� �޾ұ� ������ �ƽ�Ű �ڵ尪�� ���ش�.(���� 0�� �ƽ�Ű�ڵ� 48�̴�.) 
	}
	printf("%d", sum);
	
	return 0;
}
