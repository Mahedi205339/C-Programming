#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

        int negative = 0, positive = 0, zero = 0;

	int arrNeg[n];
	int arrPos[n];
	int arrZero[n];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			arrNeg[negative++] = arr[i];
		else if (arr[i] > 0)
			arrPos[positive++] = arr[i];
		else
			arrZero[zero++] = arr[i];
	}

	for (int i = 0; i < negative; i++)
		printf("%d ", arrNeg[i]);
	printf("\n");
	for (int i = 0; i < positive; i++)
		printf("%d ", arrPos[i]);
	printf("\n");
	for (int i = 0; i < zero; i++)
		printf("%d ", arrZero[i]);
	return 0;
}