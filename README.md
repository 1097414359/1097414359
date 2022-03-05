- #define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	const int num = 4;
//	printf("%d\n", num);
//	return 0;
//}
//#define MAX 10 
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//enum sex{
//	male,female,secret	
//};
//int main()
//{
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//}

//int main()
//{
//	char arr[] = "abc";
//	char arr1[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
//	return 0;	
//}


//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("c:\test\328\test.c");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("我要好好学习吗？（1or0）>:");
//	scanf("%d\n",&input);
//	if (input == 1)
//	printf("要\n");
//	else printf("不要\n");
//return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("我要学习吗？>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好\n");
//	else
//		printf("不好\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("敲代码\n");
//
//	while (line < 1000)
//	{
//		line++;
//		printf("继续敲代码:%d\n",line);
//	}
//	if (line >=1000)
//		printf("offer get\n");
//	return 0;
//}

int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int main()
//{
//	printf("%d\n", arr[4]);
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//}

//int main()
//{ 
//	int a = 5 %2;//取模
//	printf("%d\n", a);
//		
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", b);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a|b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int a = 0;
//	
//	printf("%d\n", a);
//	printf("%d\n", !a);
//}

int main()
{
	int arr[10] = {0};
	int ak = 0;
		printf("%d\n", sizeof (arr));
	ak = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", ak);
}
