#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//n�����
//int main() {
//	int n;
//	double dividend, divisor;
//	double sum = 0.0;
//	int i;
//	double t = 0.0;
//	scanf("%d", &n);
//	dividend = 2.0;
//	divisor = 1.0;
//
//	for (i = 1; i <= n; i++) {
//		sum += dividend / divisor;
//		t = dividend;
//		dividend = dividend + divisor;
//		divisor = t;
//	}
//	printf("%.2f\n", sum);
//	return 0;
//}

//Լ������ʽ
//int main()
//{
//	int dividend, divisor;
//	scanf("%d/%d", &dividend, &divisor);
//
//	int a = dividend;
//	int b = divisor;
//	int t;
//	while (b > 0) {
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("%d/%d\n", dividend / a, divisor / a);
//	return 0;
//}

//������
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x < 0) {
//		printf("fu");
//		x = -x;
//	}
//
//	int mask = 1;
//	int t = x;
//	while (t > 9) {
//		t /= 10;
//		mask *= 10;
//	}
//	do {
//		int d = x / mask;
//		switch (d) {
//		case 0:printf("ling"); break;
//		case 1:printf("yi"); break;
//		case 2:printf("er"); break;
//		case 3:printf("san"); break;
//		case 4:printf("si"); break;
//		case 5:printf("wu"); break;
//		case 6:printf("liu"); break;
//		case 7:printf("qi"); break;
//		case 8:printf("ba"); break;
//		case 9:printf("jiu"); break;
//		}
//		if (mask > 9)printf(" ");
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);
//	printf("\n");
//	return 0;
//}

//��a��������
//������������a��n��a�ķ�Χ��[0,9],n�ķ�Χ��[1,8],������֮��S = a+aa+aaa+aaaa+...+aaa...a(n��a),
//��aΪ2��nΪ8���������2+22+222+...+22222222�ĺ�
int main()
{
	int a, n;
	scanf("%d %d", &a, &n);

	int sum = 0;
	int i;
	int t = 0;
	for (i = 0; i < n; i++) {
		t = t * 10 + a;
		sum += t;
	}
	printf("%d\n", sum);
	return 0;
}