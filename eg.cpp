#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���Լ��
//ö�ٷ�

//շת�����
/*
	���b����0�����������a�������Լ��;
	���򣬼���a����b����������a����b����b�����Ǹ�����;
	�ص���һ����
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

//����������������
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