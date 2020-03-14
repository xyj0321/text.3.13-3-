#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
//电脑会生成一个随机数
//猜数字

//RAND_MAX 0-36767的数

void game()
{
	//生成随机数
	int ret = 0;
	// Use the srand function to seed the pseudorandom-number generator before calling rand
	ret=rand()%100-1;//生成1-100之间随机数
	printf("%d\n",ret);
	//猜数字
	int guess = 0;
	while (1)
	{

		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
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
	srand((unsigned int)time(NULL));//时间戳,用时间戳来设置随机数的生成起始点， 
	int input = 0;
	do
	{
		menu();//菜单函数
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
				break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}


//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
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
//			printf("找到了，下标是： %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//打印不出* ???
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		int res = 0;
//		for (j = 1; j <= i;j++)
//		{
//			res = i*j;
//			printf("%d%d=%-2d ", i, j, res);//2d打印两位，一位用空格补齐，-2d左对齐 
//		}
//		printf("\n");
//	}
//	return 0;
//} 



//十个数中的最大值
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//最大值
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



//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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
//	printf("%lf\n", sum);//sum为lf
//	//1/1+1/2+1/3
//	//1  +0  +0
//	return 0;
//}


//计算1-100包含9的数的个数
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
