#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//-1 --整型--32位
//1 -- 整型--32位
//最高位代表符号 
//只要是整数，内存中存储的都是二进制的补码
//正数--补码等于源码  负数--补码等于反码加一

//常见关键字
//int main()
//{
//	auto int a = 10;//局部变量-自动变量auto一般省略
//	register int a = 10;//建议把a定义成寄存器变量
//	signed int;//有符号数  默认int
//	unsigned int;//无符号数
//	typedef - 类型定义 - 类型重定义
//		typedef unsigned int u_int;//将unsigned int定义为u_int
//	unsigned int num = 20;
//	u_int num = 20;//相同
// 
//	......
//
//	return 0;
//}

//static 修饰局部变量
//局部变量生命周期变常
//static 修饰全局变量改变了变量的作用域-让静态的全局变量只能再自己所在源文件内部使用
//修饰函数 也是改变了函数作用域-不准确
//static改变了函数连接属性
//外部连接属性-内部连接属性

//void test()
//{
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}


//int main()
//{
//	//extern-声明外部符号
//	extern int g_val;
//		printf("g_val = %d\n", g_val);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//#define 定义常量和宏
//#define 可以定义宏-带参数
//#define MAX 100
//函数实现
//int Max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//		
//}
//宏的定义
//#define MAX(X,Y) (X>Y ? X : Y)
//int main()
//{
//	//int a = MAX;//a=100
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}


//指针
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	int* b = &p;//p也有地址
//	//有一种变量是用来存放地址的-指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%p\n", b);
//
//	*p = 20;//*-解引用操作符-找到存放的地址-将10改为20 
//	printf("%d\n", a);//a = 20
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//		printf("%c\n", ch);
//	return 0;
//
//
//}