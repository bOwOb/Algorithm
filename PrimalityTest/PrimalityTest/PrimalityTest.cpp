#include<stdio.h>
#include<iostream>
#include<math.h>

void main() {
	int a, i, j;
	std::cout << "�� �Է� : ";
	std::cin >> a;
	i = 2;

	if (a == 1) {
		printf("%d = �Ҽ��� �ƴ�", a);
		return;
	}
	while (1) {
		if (i <= sqrt(a)) {
			if (a % i == 0) {
				printf("%d = �ռ���", a);
				break;
			}
			else
				i++;
		}
		else {
			printf("%d = �Ҽ�", a);
			break;
		}
	}
}