#include <iostream>
void merge(int* array, int l, int mid, int r);
void sort(int* array, int l, int r);
int array2[100];

int main() {
	int i, length;
	int x = 0, y = 0;
	printf("원소 갯수 입력 : ");
	std::cin >> length;
	int* array = new int[length];

	printf("각 원소 입력 : ");
	for (i = 0; i < length; i++)
		std::cin >> array[i];

	sort(array, 0, length - 1);

	printf("merge sort : ");
	for (i = 0; i < length; i++) {
		std::cout << array[i] << " ";
	}
	printf("\n");
	return 0;
}

void merge(int* array, int l, int mid, int r) {
	int i, j, k, temp;

	mid = (l + r) / 2;
	i = l;
	j = mid + 1;
	k = l;

	while (i <= mid && j <= r) {
		if (array[i] <= array[j])
			array2[k++] = array[i++];
		else
			array2[k++] = array[j++];
	}
	if (i > mid)
		temp = j;
	else
		temp = i;

	while (k <= r)
		array2[k++] = array[temp++];

	for (i = l; i <= r; i++)
		array[i] = array2[i];
}

void sort(int* array, int l, int r) {
	int mid;
	if (l < r) {
		mid = (l + r) / 2;
		sort(array, l, mid);
		sort(array, mid + 1, r);
		merge(array, l, mid, r);
	}
}