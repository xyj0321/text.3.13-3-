#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
//���Ի�����һ�������
//������

//RAND_MAX 0-36767����

void game()
{
	//���������
	int ret = 0;
	// Use the srand function to seed the pseudorandom-number generator before calling rand
	ret=rand()%100-1;//����1-100֮�������
	printf("%d\n",ret);
	//������
	int guess = 0;
	while (1)
	{

		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
			break;
		}
		 
	}


}
void menu() 
{
	printf("*********************\n");
	printf("*** 1.play 0.exit ***\n");
	printf("*********************\n");
}
int main()
{
	srand((unsigned int)time(NULL));//ʱ���,��ʱ����������������������ʼ�㣬 
	int input = 0;
	do
	{
		menu();//�˵�����
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
				break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}


//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ� %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//��ӡ����* ???
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		int res = 0;
//		for (j = 1; j <= i;j++)
//		{
//			res = i*j;
//			printf("%d%d=%-2d ", i, j, res);//2d��ӡ��λ��һλ�ÿո��룬-2d����� 
//		}
//		printf("\n");
//	}
//	return 0;
//} 



//ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("%d\n", max);
//	return 0;
//}



//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);//sumΪlf
//	//1/1+1/2+1/3
//	//1  +0  +0
//	return 0;
//}


//����1-100����9�����ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
