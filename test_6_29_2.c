#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����
//int main()
//{
//	//const-������
//	//const int num = 4;//2.const���εĳ�����
//	//printf("%d\n", num);
//	//num = 8;//num���ܱ���
//	//printf("%d\n", num);
//	//3 ;//1.���泣����ֱ��д��
//
//	//const int n = 10;
//	//int arr[n] = {0};//����������n��ӵ�г����Ա���
//	return 0;
//}

//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4��ö�ٳ���-һһ�о�
//�Ա��У�Ů������
//��ԭɫ���죬�ƣ���
//���ڣ�1��2����
//ö�ٹؼ�-enum
enum Sex
{
	MALE,
	FEMAL,
	SECRET
	};//MALE,FEMAL,SECRET-ö�ٳ���
int main()
{
	enum Sex s = FEMAL;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMAL);//1
	printf("%d\n", SECRET);//2
	printf("%d\n", s);//1

	return 0;
}