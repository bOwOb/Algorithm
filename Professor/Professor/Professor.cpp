#include <stdio.h>

void main() {
	int a, b, c, d;
	int car, num, tot;

	for (d = 1; d <= 9; d++) {
		a = d + 2;
		for (b = 1; b <= 9; b++) {
			for (c = b - 1; c >= 1; c--) {
				car = a * 1000 + b * 100 + c * 10 + d;
				num = d * 1000 + c * 100 + b * 10 + a;
				tot = car + num;
				if (tot == 16456)
					printf("car : %d%d%d%d\n", a, b, c, d);
			}
		}
	}
}