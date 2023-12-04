#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//水仙花数
//int main() {
//	int n;
//	scanf("%d", &n);
//	int first = 1;
//	int i = 1;
//	while (i < n) {
//		first *= 10;
//		i++;
//	}
//	//printf("first=%d\n", first);
//	//遍历100-999
//	i = first;
//	while (i < first * 10) {
//		int t = i;
//		int sum = 0;
//		do {
//			int d = t % 10;
//			t /= 10;
//			int p = d;
//			int j = 1;
//			while (j < n) {
//				p *= d;
//				j++;
//			}
//			sum += p;
//		} while (t > 0);
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//乘法表
int main() {
	int n;
	scanf("%d", &n);
	int i, j;
	i = 1;
	while (i <= n) {
		j = 1;
		while (j <= i) {
			printf("%d*%d=%d", j, i, i * j);
			if (i * j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}