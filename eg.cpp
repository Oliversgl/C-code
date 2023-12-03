#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//最大公约数
//枚举法

//辗转相除法
/*
	如果b等于0，计算结束，a就是最大公约数;
	否则，计算a除以b的余数，让a等于b，而b等于那个余数;
	回到第一步。
*/

//int main() {
//	int a, b, t;
//	scanf("%d %d", &a, &b);
//	do {
//		if (a < b) {
//			t = a;
//			a = b;
//			b = t;
//		}
//		t = a % b;
//		a = b;
//		b = t;
//	} while (b!=0);
//	printf("gcd = %d\n", a);
//	return 0;
//}

//给定条件的整数集
int main() {
	int a;
	scanf("%d", &a);
	int i, j, k;
	int cnt = 0;
	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							cnt++;
							printf("%d%d%d", i, j, k);
							if (cnt == 6) {
								printf("\n");
								cnt = 0;
							}
							else {
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
}