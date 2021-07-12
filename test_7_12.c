#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int cmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		cmp = a;
//		a = b;
//		b = cmp;
//	}
//	if (a < c)
//	{
//		cmp = a;
//		a = c;
//		c = cmp;
//	}
//	if (b < c)
//	{
//		cmp = b;
//		b = c;
//		c = cmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//打印1-100所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount= %d", count);
//	return 0;
//}

//给定两个数，求最大公约数
//辗转相除
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("a,b最大公约数为：%d", b);
//	
//}

//打印1000-2000年直接的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=1000;i<=2000;i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//打印100-200直接素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//数1-100整数中有多少个数字9
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			num++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", num);
//	return 0;
//}

//计算1/1-1/2+1/3-...+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int f = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + f * 1.0/ i;
//			f = -f;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//求十个数中最大值
//int main()
//{
//	int arr[] = { 0 };
//	//scanf("%d ", arr);
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i <= num; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//输出乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}