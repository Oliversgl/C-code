#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	/*char c = 127;
//	c = c + 1;//-128*/
//	//char c = -128;
//	//c = c - 1;//127
//	//unsigned���Բ������ʽ��ʾ������ֻ��ʾ0�����������֣���������ķ�Χ����
//	//unsigned char c = 255;
//	//c = c + 1;//0
//	unsigned char c = 127;
//	c = c + 1;//128
//	int i = 255;
//	
//	printf("c=%d,i=%d\n", c, i);
//	//	11111111
//	//	00000000 00000000 00000000 11111111
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	while (++a > 0);
//	printf("int��������������ǣ�%d\n", a - 1);
//	b++;
//	while (a = a / 10)
//	{
//		b++;
//	}
//	printf("int������������������λ�ǣ�%d", b);
//	return 0;
//}

int main()
{
	/*char c = -1;
	int i = -1;
	printf("c=%u,i=%u\n", c, i);*/
	char c = 012;
	int i = 0x1A;
	printf("c=%d,i=%d\n", c, i);//10,18
	printf("c=0%o,i=0x%X\n", c, i);//c=012,i=0x1A
	printf("c=0%o,i=0x%x\n", c, i);//c=012,i=0x1a
	return 0;
}