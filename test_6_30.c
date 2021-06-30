#define _CRT_SECURE_NO_WARNINGS 1
//字符串+转义字符+注释
#include<stdio.h>
#include<string.h>
//字符串-双引号引起的一串字符
//int main()
//{
//	"hello bit";
//	"";//空字符串
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//ASCII 编码
//	char arr1[] = "abc";//数组
//	//"abc"--'a','b','c','\0'--字符串结束标志
//	char arr2[] = { 'a','b','c' ,0};//字符串的结束标志是一个\0的转义字符
//	//\0-0
// '0'-48
//	//'a'-97
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//sterlen-string length -计算字符串长度
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符-转变原来的意思
//\n-换行 ...
//int main()
//{
//	printf("abc\n");
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n", '\'');
//	return 0;
//}


//int main()
//{
//	/*printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\32');*/
//	printf("%c\n", '\x61');
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32->10进制26->作为ASCII码代表的字符
//	return 0;
//}

////选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习嘛？(1/0)>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//
//	return  0;
//}

////循环语句
//int main()
//{
//	int line = 0;
//		printf("加入比特\n");
//	while (line <= 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("好offer\n");
//	return 0;
//
//}

//函数-库函数，自定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum1 = 0;
//	int sum2 = 0;
//
//	int a = 100;
//	int b = 200;
//	sum1 = Add(num1, num2);//sum = sum1 + sum2
//	sum2 = Add(a, b);//sum = a + b
//	printf("sum1= %d\n", sum1);
//	printf("sum2= %d\n", sum2);
//
//
//	return 0;
//}

//数组-一组相同类型元素的集合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整型数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下表的方式访问元素
//	//char ch[20];//
//	//float arr[5];//
//	return 0;
//}

//操作符
// 
//算术操作符
//int main()
//{
//	int a = 5%2;//取模-余数
//	printf("%d\n", a);
//	return 0;
//}

//移（2进制）位操作符
//<<左移
//>>右移
//int main()
//{
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	a = a << 2;
//	printf("%d\n", a);
//	return 0;
//}


//位（2进制位）操作
//&按位与
//|按位或
//^按位异或
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001 
//	printf("%d\n", c);
//	return 0;
//}

//赋值操作符
//int main()
//{
//	int a = 10;
//	a = 10;//=赋值 ==判断
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 20;
//	//复合复制符
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//双目操作符
	int a = 10;
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	//printf("%d\n", a);
	//printf("%d\n", !a);//c语言中0为假，所有非0为真
	//return 0;
	printf("%d\n", sizeof(a));//sizeof是计算变量、类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(int));//sizeof是计算变量、类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(arr));//sizeof是计算变量、类型所占空间的大小，单位是字节
	printf("%d\n", sz);
}