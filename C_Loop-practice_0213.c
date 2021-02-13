#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//3個數字由大而小輸出
	/*int a;
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		int tmp = a;
		a = c;
		c = a;
	}
	if (b<c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;*/

	// print the multiply of 3
	/*int i = 0;
	for (i=1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}*/

	// find GCD
	/*int m;
	int n;
	int r = 0;

	scanf("%d%d", &m, &n);
	while (m % n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;*/

	// 印出閏年
	/*int count = 0;
	int year = 0;
	for (year = 1000; year < 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year%400 == 0)
		{
			printf("$d", year);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;*/


	// find prime number 100~200
	//int i = 0;
	//int count = 0;
	//for ( i = 100; i <= 200; i++)
	//{
	//	int j = 0;
	//	//for ( j = 2; j < i; j++) 優化
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	//if (j == i)
	//	if (j>sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount = %d ", count);
	//return 0;

	//int i = 0;
	//int count = 0;
	//for (i = 101; i <= 200; i+=2)//優化
	//{
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j > sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount = %d ", count);

	// number of 9 
//int i = 0;
//int count = 0;
//for ( i = 0; i < 100; i++)
//{
//	if (i%10 == 9)
//	{
//		count++;
//	}
//	if (i/10 == 9)
//	{
//		count++;
//	}
//}
//printf("count = %d", count);
//	return 0;
//}


// sum of fraction
//int i = 0;
//double sum = 0;
//int flag = 1;
//for ( i = 1; i <= 100; i++)
//{
//	sum += flag* 1.0 / i;
//	flag = -flag;
//}
//printf("%lf\n", sum);
//	return 0;
//}

// find max in arr
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int max = arr[0];
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for ( i = 1; i < sz; i++)
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//printf("max = %d\n", max);

//印出乘法表
//int i = 0;
//for (i = 1; i <= 9; i++)
//{
//	int j = 1;
//	for (j = 1; j<=i; j++)
//	{
//		printf("%d*%d = %d", i, j, i*j);
//	}
//	printf("\n");
//}

//優化
//int i = 0;
//for (i = 1; i <= 9; i++)
//{
//	int j = 1;
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d*%d = %-2d ", i, j, i * j); // 2右對齊 -2左對齊
//	}
//	printf("\n");
//}



return 0;
}





