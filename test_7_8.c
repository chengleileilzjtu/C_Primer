#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 10;
	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");

	//if (age < 18)
	//	printf("δ����\n");//����֧�ṹ
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("���������Ҫ������\n");
//
//	}//�����
//	else if (age >= 18 && age < 28)
//		printf("������\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("hah\n");//else�����δƥ��if����ƥ��
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("hah\n");//else�����δƥ��if����ƥ��
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//if (num = 5)//=��ֵ���Ϊ�棬���Դ�ӡ  ==�ж�
//	if(5 == num)//��������߲��������ʽ�ϸ���
//		printf("hehe\n");
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//���1-100֮�������
//int main()
//{
//	int a = 1;
//	int b ;
//	while (a <= 100)
//	{
//		b = a % 2;
//		if (1 == b)
//			printf("%d ", a);
//		 a++ ;
//	}
//	return 0;
//}


//switch���֧���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//
//	case 5:
//		printf("����5\n");
//		break;
//
//	case 6:
//		printf("������\n");
//		break;
//
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break ;
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//			switch (n)//swith����Ƕ��
//			{
//			case 1: n++;
//			case 2:
//					m++; 
//					n++;
//					break;
//			}
//	case 4:m++;
//			break;
//	default:
//			break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	while (1);//��ѭ��
//	{
//
//	}
//	return 0;
//}

//��ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//������ֹѭ��
//		continue;//��ֹ����ѭ����ֱ�ӽ����жϣ���ִ�к������
//		printf("%d", i);
//			i++;
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = getchar();
//	//	putchar(ch);
//	//	printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ctrl+z EOF-end of file  -> -1
//	{
//		putchar(ch);
//	}
//
//		
//	return 0;
//}