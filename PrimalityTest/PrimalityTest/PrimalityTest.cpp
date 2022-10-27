#include<stdio.h>
#include<iostream>
#include<math.h>

void main() {
	int a, i, j;
	std::cout << "수 입력 : ";
	std::cin >> a;
	i = 2;

	if (a == 1) {
		printf("%d = 소수가 아님", a);
		return;
	}
	while (1) {
		if (i <= sqrt(a)) {
			if (a % i == 0) {
				printf("%d = 합성수", a);
				break;
			}
			else
				i++;
		}
		else {
			printf("%d = 소수", a);
			break;
		}
	}
}