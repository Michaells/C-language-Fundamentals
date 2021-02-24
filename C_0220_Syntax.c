//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int a = -1;
//	 絏 は絏 干絏 纗笵ず琌干絏
//	 10000000000000000000000000000001 --絏
//	 11111111111111111111111111111110 --は絏
//	 11111111111111111111111111111111 --干絏(は絏+1)
//	 衡砃簿 干才腹
//	int b = a >> 1;
//	int c = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
	/*int a = 3;
	int b = 5;*/
	//int c = a & b;
	// 00000000000000000000000000000011
	// 00000000000000000000000000000101
	// 00000000000000000000000000000001--1
	
	/*int a = 3;
	int b = 5;
	int c = a | b;*/

	// 00000000000000000000000000000011
	// 00000000000000000000000000000101
	// 00000000000000000000000000000111--7
	
	//int a = 3;
	//int b = 5;
	//int c = a ^ b; 
	// 00000000000000000000000000000011
	// 00000000000000000000000000000101
	// 00000000000000000000000000000110--6

//	printf("%d\n", c);
//	return 0;
//
//}


//int main()
//{
	/*int a = 3;
	int b = 5;
	int tmp = 0;
	printf("before: a = %d, b = %d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("after: a = %d, b = %d", a, b);*/

//	int a = 3;
//	int b = 5;
//
//	//犯
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = %d, b = %d", a, b);
//
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//参璸num干絏い1计
//	while (num)
//	{
//		if (num%2 ==1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()//参璸num干絏い1计-1―眔
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (1 == (num >> i) & 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//	a = a >> 1;
//	a >>= 1;
//	a = a & 1;
//	a &= 1;
//
//	return 0;
//}