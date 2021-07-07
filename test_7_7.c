 #define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));//32-4个字节 64-6个字节
//
//	return 0;
//}

//结构体
//char int doubt....
//人？书-复杂对象
//复杂对象--结构体-我们自己创造出来的一种类型
struct Book
{
	char name[20];//c语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "c语言程序设计",55 };
	struct Book* pb = &b1;
	strcpy(b1.name, "c++");//strcpy-string copy-字符串拷贝-库函数-string.h
	//利用pb打印出我们的书名和价格
	//.应用结构体变量
	//->结构体指针->成员
	printf("书名：%s\n", (*pb).name);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d", b1.price);

	return 0;
}