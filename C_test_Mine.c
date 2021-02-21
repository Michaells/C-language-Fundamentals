#include<stdio.h>
#include"0219_Mine.h"
void menue()
{
	printf("==========================\n");
	printf("======= Mine_Game ========\n");
	printf("========1. Play ==========\n");
	printf("========0. Exit ==========\n");
	printf("==========================\n");
}
void game()
{
	// mine info storage
	// 1.���m�n��mine info
	char mine[ROWS][COLS] = { 0 };
	// 2.�Ƭd�X��mine info
	char show[ROWS][COLS] = { 0 };
	// Initialization
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	// print out board
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	// 1.�}�l�G�p
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	// 2.���p
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menue();
		printf("\nPlease select:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\nExit_game");
			break;
		default:
			printf("\nPlease re-select");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}