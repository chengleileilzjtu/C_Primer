#define _CRT_SECURE_NO_WARNINGS 1
//�ַ���+ת���ַ�+ע��
#include<stdio.h>
#include<string.h>
//�ַ���-˫���������һ���ַ�
//int main()
//{
//	"hello bit";
//	"";//���ַ���
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//ASCII ����
//	char arr1[] = "abc";//����
//	//"abc"--'a','b','c','\0'--�ַ���������־
//	char arr2[] = { 'a','b','c' ,0};//�ַ����Ľ�����־��һ��\0��ת���ַ�
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
//	printf("%d\n", strlen(arr1));//sterlen-string length -�����ַ�������
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//ת���ַ�-ת��ԭ������˼
//\n-���� ...
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
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32->10����26->��ΪASCII�������ַ�
//	return 0;
//}

////ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�(1/0)>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//
//	return  0;
//}

////ѭ�����
//int main()
//{
//	int line = 0;
//		printf("�������\n");
//	while (line <= 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("��offer\n");
//	return 0;
//
//}

//����-�⺯�����Զ��庯��
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

//����-һ����ͬ����Ԫ�صļ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
//	//char ch[20];//
//	//float arr[5];//
//	return 0;
//}

//������
// 
//����������
//int main()
//{
//	int a = 5%2;//ȡģ-����
//	printf("%d\n", a);
//	return 0;
//}

//�ƣ�2���ƣ�λ������
//<<����
//>>����
//int main()
//{
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	a = a << 2;
//	printf("%d\n", a);
//	return 0;
//}


//λ��2����λ������
//&��λ��
//|��λ��
//^��λ���
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001 
//	printf("%d\n", c);
//	return 0;
//}

//��ֵ������
//int main()
//{
//	int a = 10;
//	a = 10;//=��ֵ ==�ж�
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 20;
//	//���ϸ��Ʒ�
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//˫Ŀ������
	int a = 10;
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	//printf("%d\n", a);
	//printf("%d\n", !a);//c������0Ϊ�٣����з�0Ϊ��
	//return 0;
	printf("%d\n", sizeof(a));//sizeof�Ǽ��������������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(int));//sizeof�Ǽ��������������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(arr));//sizeof�Ǽ��������������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sz);
}