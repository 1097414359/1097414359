#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("%d\n", num1);
//	else
//		printf("%d\n", num2);
//
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d b=%d\n", a, b);
//}

//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("a=%d b=%d\n", a, b);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&&b;
//	printf("%d\n", c);
//			
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a||b;
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num1 = 30;
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	extern int gobal;
//	printf("%d\n",gobal);
//
//	return  0;
//}

//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'a';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));
	return 0;
}