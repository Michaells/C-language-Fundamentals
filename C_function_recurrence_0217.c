//#include<stdio.h>
//#include<string.h>
//#include<math.h>

//int main()
//{
//	//("0217 lesson_function_recurrence")
//	printf("haha\n");
//	main();
//	return 0;
//}

	//print 1234
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n / 10);
//	}
//	printf(" %d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//	return 0;
//}

	//find the string length without variables
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = { "pixel" };
//	int len = my_strlen(arr);
//	printf("len is %d\n", len);
//	return 0;
//}

	//¨D¶¥¼h
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for ( i = 0; i <=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int Fac2(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


	// find Fibonacci

//int count = 0;
//
//int Fib1(int n)
//{
//	if (n == 3) //tesst how many times Fib(3) being called
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//}

//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	//ret = Fib1(n);
//	ret = Fib2(n);
//	printf("ret = %d\n", ret);
//	//TDD test driven development
//	//printf("count = %d\n", count);
//	return 0;
//}

