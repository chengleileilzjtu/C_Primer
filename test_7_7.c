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
//	printf("%d\n", sizeof(pd));//32-4���ֽ� 64-6���ֽ�
//
//	return 0;
//}

//�ṹ��
//char int doubt....
//�ˣ���-���Ӷ���
//���Ӷ���--�ṹ��-�����Լ����������һ������
struct Book
{
	char name[20];//c���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "c���Գ������",55 };
	struct Book* pb = &b1;
	strcpy(b1.name, "c++");//strcpy-string copy-�ַ�������-�⺯��-string.h
	//����pb��ӡ�����ǵ������ͼ۸�
	//.Ӧ�ýṹ�����
	//->�ṹ��ָ��->��Ա
	printf("������%s\n", (*pb).name);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d", b1.price);

	return 0;
}