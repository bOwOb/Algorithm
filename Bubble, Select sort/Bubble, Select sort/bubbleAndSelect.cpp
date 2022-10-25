#include <iostream>
int selection(int* array, int length);
int bubble(int* array, int length);
void sw(int* a, int* b);

int main() {
	int i, length;
	printf("원소 갯수 입력 : ");
	std::cin >> length;
	int* array = new int[length];

	printf("각 원소 입력 : ");
	for (i = 0; i < length; i++)
		std::cin >> array[i];

	selection(array, length);
	bubble(array, length);
	return 0;
}

int selection(int* array, int length) {
	int i, j, min, temp;

	for (i = 0; i < length; i++) {
		min = array[i];
		temp = i;
		for (j = i + 1; j < length; j++) {
			if (min > array[j]) {
				min = array[j];
				temp = j;
			}
		}
		sw(&array[i], &array[temp]);
	}

	printf("selection sort : ");
	for (i = 0; i < length; i++) {
		std::cout << array[i] << " ";
	}
	printf("\n");
	return 0;
}

int bubble(int* array, int length) {
	int i, j, min, temp;

	for (i = 0; i < length; i++) {
		for (j = 0; j < length - (i + 1); j++) {
			if (array[j] > array[j + 1]) {
				sw(&array[j], &array[j + 1]);
			}
		}
	}

	printf("bubble    sort : ");
	for (i = 0; i < length; i++) {
		std::cout << array[i] << " ";
	}
	printf("\n");
	return 0;
}

void sw(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}