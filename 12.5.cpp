#define _CRT_SECURE_NO_WARNINGS
//统计素数并求和
#include <stdio.h>
//int main() {
//	int m, n;
//	int i = 0;
//	int cnt = 0;
//	int sum = 0;
//	scanf("%d %d", &m, &n);
//	if (m == 1) {
//		m = 2;
//	}
//	for (i = m; i <= n; i++) {
//		int isPrame = 1;
//		int k;
//		for (k = 2; k < i - 1; k++) {
//			if (i % k == 0) {
//				isPrame = 0;
//				break;
//			}
//		}
//		if (isPrame) {
//			cnt++;
//			sum += i;
//		}
//	}
//	printf("%d %d", cnt, sum);
//	return 0;
//}
int main() {
	int number, n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d", &number, &n);
	do {
		scanf("%d", &inp);
		cnt++;
		if (inp < 0) {
			printf("Game Over\n");
			finished = 1;
		}
		else if (inp > number) {
			printf("Too big\n");
		}
		else if (inp < number) {
			printf("Too small\n");
		}
		else {
			if (cnt == 1) {
				printf("Bingo!\n");
			}
			else if (cnt <= 3) {
				printf("Lucky You!\n");
			}
			else {
				printf("Good Guess\n");
			}
			finished = 1;
		}
		if (cnt == n) {
			if (!finished) {
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while (!finished);
	return 0;
}