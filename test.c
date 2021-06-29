#include<stdio.h>
//变量 全局变量 局部变量 作用域 生命周期 数据类型

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok 局部变量生命周期进入作用域开始，出作用域生命周期结束。全局变量整个程序都是生命周期
//	}
//	printf("a = %d\n", a)//error
//	return 0;
//}





////未声明的表示符
////声明extern 外部符号
////extern int g_val;
//int global = 0;//全局变量作用域是整个工程
//void test()
//{
//	printf("teast()--%d\n", global);
//}
//int main()
//{
//	{
//		int num = 0;//局部变量作用域为所在模块
//	}
//	printf("glaobal = %d\n", global);
//	return 0;
//}

//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);//&-取地址符号
//	sum = num1 + num2; //C语言语法规定 变量要定义在当前代码块的最前面
//	printf("%d\n", sum);
//	return 0;
//}




//int a = 10;//全局变量可供任何一部分使用
//int main()
//{ 
//	{
//		int a = 10;
//	}//a为局部变量不能供局部外使用
//	printf("%d\n",a)
//	return 0;
//}


//int num1 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//
//	int num1 = 10;//局部变量-定义在代码块内部的变量
//	//局部变量和全局变量不要相同，容易产生bug。当相同时，局部变量优先。
//	printf("%d\n", num1);
//	return 0;
//} 

//int main()
//{
//	//年龄
//	//20
//	short int age = 20;//向内存申请2个字节=162bit位用来存放20
//	float weight = 95.6f;//向内存申请4个字节存放小数 f用来明确单精度类型
//
//	return 0;
//}
//int main()
//{
//	printf("% d\n", sizeof(char));//1字节	
//	printf("% d\n", sizeof(short));//2字节
//	printf("% d\n", sizeof(int));//4字节
//	printf("% d\n", sizeof(long));//4字节
//	printf("% d\n", sizeof(long long));//8字节
//	printf("% d\n", sizeof(float));//4字节
//	printf("% d\n", sizeof(double));//8字节
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//char-字符类型
//int-整型
//short int-短整型
//long-长整型
//long long-更长整形
//float-单精度浮点型
//double-双精度浮点型

//int main()
//{
	//char ch = 'A';//内存
	//printf("%c\n",ch);//%C-打印字符格式数据

	//int age = 20;
	//printf("%d\n", age);//%d打印整型十进制数据

	//long num = 100;
	//printf("%d", num);

	//float f = 5.0;
	//printf("%f\n", f);%f打印浮点型数据

	//double d = 3.14;
	//printf("%lf\n", d);//%lf打印双精度浮点型数据
		//return 0;
//}
//20
//55.5





//
////包含一个叫stdio.h的文件
////std-标准 standard input output
//#include<stdio.h>
////int 是整型的意思
////main前面int表示main函数调用返回一个整型值
//int main()//主函数-程序的入口-main函数有且仅有一个
//
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function-printf-打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	printf("hello 磊磊\n");
//	
//
//	return 0;//返回 0
//	}
