#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//前n项求和
//int main() {
//	int n ;
//	int i ;
//	double sum = 0.0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++) {
//		sum += 1.0 / i;
//	}
//	c
//}

//自己写的
//int main() {
//	int n = 0;
//	int i = 0;
//	double sum = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum += 1.0*num / i;
//		num = -num;
//	}
//	printf("f(%d)= %f\n", n, sum);
//	return 0;
//}

//翁恺写的
//int main()
//{
//	int n;
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum += sign * 1.0 / i;
//		sign = -sign;
//	}
//	printf("f(%d)= %f\n", n, sum);
//	return 0;
//}

//法二
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0.0;
//	double sign = 1.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum += sign / i;
//		sign = -sign;
//	}
//	printf("f(%d)=%f", n, sum);
//	return 0;
//}

//正序分解整数
//法一：先逆序再运算（只适用于末尾没有0的数字）
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	//  12345
//	//  12345%10->5  12345/10->1234
//	//  1234%10->4   1234/10->123
//	//  123%10->3	 123/10->12
//	//  12%10->2	 12/10->1
//	//	1%10->1		 1/10->0
//	int t = 0;
//	do {
//		int d = n % 10;
//		t = t * 10 + d;
//		n /= 10;
//	} while (n > 0);
//	n = t;
//	while (n != 0) {
//		int d = 0;
//		d = n % 10;
//		printf("%d", d);
//		if (n >= 10)
//		{
//			printf(" ");
//		}
//		n /= 10;
//	}
//	printf("\n");
//	return 0;
//}

//标准程序
int main() {
	int x;
	scanf("%d", &x);
	int mask = 1;
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}
	//printf("x=%d,mask=%d\n", x, mask);
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");
	return 0;
}