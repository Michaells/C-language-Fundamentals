//#include<stdio.h>
//#include<string.h>
//#include<math.h>

//int main()
//{
//	//printf("0216 lesson_function");

	//strcpy
//	char arr1[] = { "hehe" };
//	char arr2[] = { "######" };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

	//memset
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}

	// find maximun_function
//get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(100, 300);
//	printf("max = %d", max);
//	return 0;
//}

	// function_exchange two number
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap2(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//Swap(a, b);
//	Swap2(&a, &b);
//	printf("a= %d\nb= %d", a, b);
//	return 0;
//}

	//determine a number is a prime or not
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1; //走完for循環才能判斷
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

	//判斷閏年_函數
//int is_leap_year(int y)
//{
//	if ((y%4 == 0 && y%100 != 0) || (y%400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}               //############ CLEAN CODE
//
//int main()
//{
//	int year = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d", year);
//	}
//	return 0;
//}

	//binary search

//int Bin_search(int arr[], int k, int sz) //本質上arr是一個指針
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Bin_search(arr, k ,sz); //傳遞過去的是陣列第一個數的地址
//	if (ret == -1)
//	{
//		printf("Cannot find the number\n");
//
//	}
//	else
//	{
//		printf("find it, the index is %d\n", ret);
//	}
//	return 0;
//}

	//count function_call_times
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

	//趣味題
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43))); //4321 printf 會return打印的字符數
//	return 0;
//}

