#include<stdio.h>
/*2751�� �� �����ϱ�-2*/
#define MAX 1000000    // ������ ������ ������ 1,000,000�̴�.
#define QSWAP(x, y) { int t = x; x = y; y = t; }  // ������ SWAP �Լ�

int N, arr[MAX]; // ������ ������ ������ �迭

/*�ð� �ȿ� Ǯ�� ����, ����Ʈ�� �̿��Ѵ�.*/
void QSort(int *array, int left, int right)
{
	int mLeft = left, mRight = right;
	int pivot = array[(left + right) / 2];

	while (mLeft <= mRight)
	{
		while (pivot > array[mLeft]) 
			mLeft++;

		while (pivot < array[mRight]) 
			mRight--;

		if (mLeft <= mRight) 
		{
			QSWAP(array[mLeft], array[mRight]);
			mLeft++, mRight--;
		}
	}

	if (left < mRight) 
		QSort(arr, left, mRight);

	if (mLeft < right) 
		QSort(arr, mLeft, right);
}

int main()
{
	int idx;

	scanf("%d", &N);

	for (idx = 0; idx < N; idx++)
		scanf("%d", &arr[idx]);

	QSort(arr, 0, N - 1);    // �迭 �ε��� 0 ~ N-1 ���� ����Ʈ	 // ���

	for (idx = 0; idx < N; idx++)
		printf("%d ", arr[idx]);

	return 0;
}

