#include<stdio.h>
//���� ȫ�ֱ��� �ֲ����� ������ �������� ��������

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok �ֲ������������ڽ���������ʼ�����������������ڽ�����ȫ�ֱ���������������������
//	}
//	printf("a = %d\n", a)//error
//	return 0;
//}





////δ�����ı�ʾ��
////����extern �ⲿ����
////extern int g_val;
//int global = 0;//ȫ�ֱ�������������������
//void test()
//{
//	printf("teast()--%d\n", global);
//}
//int main()
//{
//	{
//		int num = 0;//�ֲ�����������Ϊ����ģ��
//	}
//	printf("glaobal = %d\n", global);
//	return 0;
//}

//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2);//&-ȡ��ַ����
//	sum = num1 + num2; //C�����﷨�涨 ����Ҫ�����ڵ�ǰ��������ǰ��
//	printf("%d\n", sum);
//	return 0;
//}




//int a = 10;//ȫ�ֱ����ɹ��κ�һ����ʹ��
//int main()
//{ 
//	{
//		int a = 10;
//	}//aΪ�ֲ��������ܹ��ֲ���ʹ��
//	printf("%d\n",a)
//	return 0;
//}


//int num1 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//
//	int num1 = 10;//�ֲ�����-�����ڴ�����ڲ��ı���
//	//�ֲ�������ȫ�ֱ�����Ҫ��ͬ�����ײ���bug������ͬʱ���ֲ��������ȡ�
//	printf("%d\n", num1);
//	return 0;
//} 

//int main()
//{
//	//����
//	//20
//	short int age = 20;//���ڴ�����2���ֽ�=162bitλ�������20
//	float weight = 95.6f;//���ڴ�����4���ֽڴ��С�� f������ȷ����������
//
//	return 0;
//}
//int main()
//{
//	printf("% d\n", sizeof(char));//1�ֽ�	
//	printf("% d\n", sizeof(short));//2�ֽ�
//	printf("% d\n", sizeof(int));//4�ֽ�
//	printf("% d\n", sizeof(long));//4�ֽ�
//	printf("% d\n", sizeof(long long));//8�ֽ�
//	printf("% d\n", sizeof(float));//4�ֽ�
//	printf("% d\n", sizeof(double));//8�ֽ�
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//char-�ַ�����
//int-����
//short int-������
//long-������
//long long-��������
//float-�����ȸ�����
//double-˫���ȸ�����

//int main()
//{
	//char ch = 'A';//�ڴ�
	//printf("%c\n",ch);//%C-��ӡ�ַ���ʽ����

	//int age = 20;
	//printf("%d\n", age);//%d��ӡ����ʮ��������

	//long num = 100;
	//printf("%d", num);

	//float f = 5.0;
	//printf("%f\n", f);%f��ӡ����������

	//double d = 3.14;
	//printf("%lf\n", d);//%lf��ӡ˫���ȸ���������
		//return 0;
//}
//20
//55.5





//
////����һ����stdio.h���ļ�
////std-��׼ standard input output
//#include<stdio.h>
////int �����͵���˼
////mainǰ��int��ʾmain�������÷���һ������ֵ
//int main()//������-��������-main�������ҽ���һ��
//
//{
//	//�����������
//	//����Ļ�����hello world
//	//����-print function-printf-��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	printf("hello ����\n");
//	
//
//	return 0;//���� 0
//	}
