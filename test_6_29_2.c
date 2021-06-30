#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//常量
//int main()
//{
//	//const-常属性
//	//const int num = 4;//2.const修饰的常变量
//	//printf("%d\n", num);
//	//num = 8;//num不能被改
//	//printf("%d\n", num);
//	//3 ;//1.字面常量，直接写出
//
//	//const int n = 10;
//	//int arr[n] = {0};//编译错误表明n是拥有常属性变量
//	return 0;
//}

//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4，枚举常量-一一列举
//性别：男，女，保密
//三原色：红，黄，蓝
//星期：1，2、、
//枚举关键-enum
enum Sex
{
	MALE,
	FEMAL,
	SECRET
	};//MALE,FEMAL,SECRET-枚举常量
int main()
{
	enum Sex s = FEMAL;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMAL);//1
	printf("%d\n", SECRET);//2
	printf("%d\n", s);//1

	return 0;
}