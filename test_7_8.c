#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 10;
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");

	//if (age < 18)
	//	printf("未成年\n");//单分支结构
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("多条语句需要括起来\n");
//
//	}//代码块
//	else if (age >= 18 && age < 28)
//		printf("青少年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("长寿\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("hah\n");//else与最近未匹配if进行匹配
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("hah\n");//else与最近未匹配if进行匹配
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//if (num = 5)//=赋值语句为真，可以打印  ==判断
//	if(5 == num)//常量放左边不会出错，形式上更优
//		printf("hehe\n");
//	return 0;
//}

//判断一个数是否为奇数
//输出1-100之间的奇数
//int main()
//{
//	int a = 1;
//	int b ;
//	while (a <= 100)
//	{
//		b = a % 2;
//		if (1 == b)
//			printf("%d ", a);
//		 a++ ;
//	}
//	return 0;
//}


//switch多分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//
//	case 5:
//		printf("星期5\n");
//		break;
//
//	case 6:
//		printf("星期六\n");
//		break;
//
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break ;
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//			switch (n)//swith可以嵌套
//			{
//			case 1: n++;
//			case 2:
//					m++; 
//					n++;
//					break;
//			}
//	case 4:m++;
//			break;
//	default:
//			break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	while (1);//死循环
//	{
//
//	}
//	return 0;
//}

//打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//永久终止循环
//		continue;//终止本次循环，直接进行判断，不执行后面语句
//		printf("%d", i);
//			i++;
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = getchar();
//	//	putchar(ch);
//	//	printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ctrl+z EOF-end of file  -> -1
//	{
//		putchar(ch);
//	}
//
//		
//	return 0;
//}