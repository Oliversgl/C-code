#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*double ff = 1234.56789;
	printf("%e,%E,%f\n", ff,ff,ff);*/

	//double ff = 1E-10;
	//printf("%E,%f\n", ff, ff);
	//printf("%E,%.16f\n", ff, ff);//.~f��ʾ���С��������λ

	//������������
	/*printf("%.3f\n", -0.0049);
	printf("%.30f\n", -0.0049);
	printf("%.3f\n", -0.00049);*/

	//inf��nan
	/*printf("%f\n", 12.0 / 0.0);
	printf("%f\n", -12.0 / 0.0);
	printf("%f\n", 0.0 / 0.0);*/

	//��������ľ���
	float a, b, c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468)
		printf("���\n");
	else
		printf("�����!c=%.10f,��%f\n", c, c);
	return 0;
}