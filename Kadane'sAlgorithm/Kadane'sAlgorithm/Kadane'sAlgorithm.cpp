#include<iostream>
using namespace std;
int* firstarr;
int* lastarr;

void maxarray(int* a, int size)
{
	int maxFar = INT_MIN, maxEnd = 0;
	int i, j;

	for (int i = 0; i < size; i++)
	{
		maxEnd = maxEnd + a[i];
		if (maxFar < maxEnd) {
			maxFar = maxEnd;
			lastarr = &a[i];
		}
		if (maxEnd < 0) {
			maxEnd = 0;
			firstarr = &a[i];
		}
	}
	for (firstarr++; firstarr < lastarr + 1; firstarr++) {
		printf("%d ", *firstarr);
	}
}

int main()
{
	int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int n = sizeof(a) / sizeof(a[0]);
	maxarray(a, n);

	return 0;
}