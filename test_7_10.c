#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//EOF-end of file 文件结束标志
//	//	putchar(ch);
//
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//缓冲区还剩余一个\n
//	while ((ch = getchar()) != '\n')//读取剩余内容 直到\n
//	{
//
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	return 0;
// }


//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for 循环
//while循环问题初始化，判断，调整三部分表较分散
//int main()
//{
//	int i = 0;
//	for (i=1; i<= 10; i++)//初始化 判断 调整集合在一起
//	{
//		if (i == 5)
//			break;  
//		printf("%d", i);
//	}
//	return 0;
//}

//for循环变种
//1死循环
//int main()
//{
//	int i = 0;
//		for (; ;)
//		{
//			printf("%d", i);
//	}
//	return 0;
//}

//2 两个变量控制


//do while 循环

//int main()
//{
//	int i = 1;
//	do
//	{
//			printf("%d", i);
//			i++; 
//	} while (i <= 10);
//
//	return 0;
//}

//计算sum=1！+2！+...n! 
//int main()
//{
//	int n = 3;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//
//		sum = sum + ret;
//	}
//
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}

//折半查找算法
//int main()
//{
//	int k = 10;
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//		return 0;
//}


//字符两端移动
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to LZJTU";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(300);//停留
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//
//	return 0;
//}

//用户登录
int main()
{
	int i = 0;
	char password[] = "123456";
	char inpassword[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码->");
		scanf("%s", inpassword);
		if (strcmp(inpassword , password) == 0)//strcmp比较两个字符串，相等返回0
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
			
	}
	if (i == 4)
	{
		printf("登陆失败\n");
	}
	return 0;
}