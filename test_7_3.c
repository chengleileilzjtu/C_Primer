#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////比较两个值大小
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//~按位取反
//	printf("%d\n%d\n", a, b); //源码，补码，反码。负数在内存储存的时候，存储的是二进制的补码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++
//	int c = ++a;//前置++，先++，再使用
//	printf(" a = %d\n b = %d\n c = %d\n", a, b, c);
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	//真-非0
//	//假-0
//	int a = 3;;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//
//	printf("%d\n%d\n", c,d);
//	return 0;
//}

//条件操作符
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//三目操作符
//	printf("%d\n", max);
//	return 0;
//}