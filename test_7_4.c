#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//-1 --����--32λ
//1 -- ����--32λ
//���λ������� 
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--�������Դ��  ����--������ڷ����һ

//�����ؼ���
//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�����autoһ��ʡ��
//	register int a = 10;//�����a����ɼĴ�������
//	signed int;//�з�����  Ĭ��int
//	unsigned int;//�޷�����
//	typedef - ���Ͷ��� - �����ض���
//		typedef unsigned int u_int;//��unsigned int����Ϊu_int
//	unsigned int num = 20;
//	u_int num = 20;//��ͬ
// 
//	......
//
//	return 0;
//}

//static ���ξֲ�����
//�ֲ������������ڱ䳣
//static ����ȫ�ֱ����ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ�����Դ�ļ��ڲ�ʹ��
//���κ��� Ҳ�Ǹı��˺���������-��׼ȷ
//static�ı��˺�����������
//�ⲿ��������-�ڲ���������

//void test()
//{
//	static int a = 1;//a��һ����̬�ֲ�����
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
//	//extern-�����ⲿ����
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


//#define ���峣���ͺ�
//#define ���Զ����-������
//#define MAX 100
//����ʵ��
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
//��Ķ���
//#define MAX(X,Y) (X>Y ? X : Y)
//int main()
//{
//	//int a = MAX;//a=100
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}


//ָ��
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	int* b = &p;//pҲ�е�ַ
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%p\n", b);
//
//	*p = 20;//*-�����ò�����-�ҵ���ŵĵ�ַ-��10��Ϊ20 
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