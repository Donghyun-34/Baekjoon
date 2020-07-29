#include<stdio.h>
/*2751번 수 정렬하기-2*/
#define MAX 1000000    // 데이터 개수의 범위는 1,000,000이다.
#define QSWAP(x, y) { int t = x; x = y; y = t; }  // 간단한 SWAP 함수

int N, arr[MAX]; // 데이터 개수와 저장할 배열

/*시간 안에 풀기 위해, 퀵소트를 이용한다.*/
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

	QSort(arr, 0, N - 1);    // 배열 인덱스 0 ~ N-1 까지 퀵소트	 // 출력

	for (idx = 0; idx < N; idx++)
		printf("%d ", arr[idx]);

	return 0;
}

