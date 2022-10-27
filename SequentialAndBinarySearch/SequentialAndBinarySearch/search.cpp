#include<stdio.h>

void sequential(int arr[], int data, int len) {
	for (int i = 0; i < len; i++) {
		if (arr[i] == data)
			printf("%d", arr[i]);
		else
			printf("not found\n");
	}
}

int binary(int arr[], int point, int high, int mid, int low) {
	while (1) {
		if (low <= high) {
			mid = (low + high) / 2;

			if (point == arr[mid]) {
				printf("index %d = %d\\n", mid, point);
				break;
			}
			if (point <= arr[mid])
				high = mid;
			else
				low = mid;
		}
		else {
			printf("%d not found\\n", point);
			break;
		}
	}
	return 0;
}