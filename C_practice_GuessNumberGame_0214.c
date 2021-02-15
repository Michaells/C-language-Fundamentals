//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
////²q¼Æ¦r¹CÀ¸
//
//void menu()
//{
//	printf("*************************************\n");
//	printf("*****1. play  0. exit      **********\n");
//	printf("*************************************\n");
//
//}
//void game()
//{
//	printf("guess number game\n");
//	// 1.randomly generate a number
//	// 2.guess a number
//	int ret;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("guess a number\n");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("try smaller\n");
//		}
//		else if (guess<ret)
//		{
//			printf("try bigger\n");
//		}
//		else
//		{
//			printf("Congrats, Got it!!");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //timestamp
//	do
//	{
//		menu();
//		printf("\nplease choose=>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit game\n");
//			break;
//		default:
//			printf("system wrong\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}