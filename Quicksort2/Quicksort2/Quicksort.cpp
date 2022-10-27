#include <iostream>
#include <time.h>
void quick(int* array, int front, int back);
void sw(int* a, int* b);
int array2[1000];

int main() {
	int i, length;
	int x = 0, y = 0;
	clock_t start, end;
	float result;

	printf("input to elements count : ");
	std::cin >> length;
	length++;
	int* array = new int[length];

	printf("input to elements : ");
	for (i = 1; i < length; i++)
		std::cin >> array[i];

	start = clock();
	quick(array, 0, length - 1);

	printf("quick sort : ");
	for (i = 1; i < length; i++) {
		std::cout << array[i] << " ";
	}
	end = clock();
	printf("\\n");

	result = (float)(end - start) / CLOCKS_PER_SEC;
	printf("elapsed : %.5fs\\n", result);

	return 0;

}

void quick(int* array, int front, int back) {
	if (front >= back) //앞뒤 바뀌면 중지
		return;

	int pivot = front;
	int i = front + 1;
	int j = back;
	int temp;

	//while (i<j){
	while (i <= j) {
		while (i <= back && (array[i] <= array[pivot])) {
			i++;
		}
		while (j > front && (array[j] >= array[pivot])) {
			j--;
		}

		if (i > j) {
			sw(&array[j], &array[pivot]);
		}

		else {
			sw(&array[i], &array[j]);
		}
	}

	quick(array, front, j - 1);
	quick(array, j + 1, back);
}

void sw(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}