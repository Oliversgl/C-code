#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*double ff = 1234.56789;
	printf("%e,%E,%f\n", ff,ff,ff);*/

	//double ff = 1E-10;
	//printf("%E,%f\n", ff, ff);
	//printf("%E,%.16f\n", ff, ff);//.~f表示输出小数点后多少位

	//四舍五入性质
	/*printf("%.3f\n", -0.0049);
	printf("%.30f\n", -0.0049);
	printf("%.3f\n", -0.00049);*/

	//inf和nan
	/*printf("%f\n", 12.0 / 0.0);
	printf("%f\n", -12.0 / 0.0);
	printf("%f\n", 0.0 / 0.0);*/

	//浮点运算的精度
	float a, b, c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468)
		printf("相等\n");
	else
		printf("不相等!c=%.10f,或%f\n", c, c);
	return 0;
}