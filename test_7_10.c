#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//EOF-end of file �ļ�������־
//	//	putchar(ch);
//
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	//��������ʣ��һ��\n
//	while ((ch = getchar()) != '\n')//��ȡʣ������ ֱ��\n
//	{
//
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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

//for ѭ��
//whileѭ�������ʼ�����жϣ����������ֱ�Ϸ�ɢ
//int main()
//{
//	int i = 0;
//	for (i=1; i<= 10; i++)//��ʼ�� �ж� ����������һ��
//	{
//		if (i == 5)
//			break;  
//		printf("%d", i);
//	}
//	return 0;
//}

//forѭ������
//1��ѭ��
//int main()
//{
//	int i = 0;
//		for (; ;)
//		{
//			printf("%d", i);
//	}
//	return 0;
//}

//2 ������������


//do while ѭ��

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

//����sum=1��+2��+...n! 
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

//�۰�����㷨
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//		return 0;
//}


//�ַ������ƶ�
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
//		Sleep(300);//ͣ��
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//
//	return 0;
//}

//�û���¼
int main()
{
	int i = 0;
	char password[] = "123456";
	char inpassword[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("����������->");
		scanf("%s", inpassword);
		if (strcmp(inpassword , password) == 0)//strcmp�Ƚ������ַ�������ȷ���0
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
			
	}
	if (i == 4)
	{
		printf("��½ʧ��\n");
	}
	return 0;
}