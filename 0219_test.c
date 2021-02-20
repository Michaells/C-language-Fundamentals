#include<stdio.h>
#include"0219_game.h"

	//  三子棋小遊戲

void menue()
{
	printf("*****************************\n");
	printf("*****1._Play   0._Exit*******\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	// create an array to store board info
	char board[ROW][COL]; //全部空格
	//initialize board
	InitBoard(board, ROW, COL);
	//initialize board
	DisplayBoard(board, ROW, COL);
	// print board
	while (1)
	{
		//player first
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
		// cpu's turn
		CPUMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'P')
	{
		printf("player win");
	}
	else if (ret == '#')
	{
		printf("CPU win");
	}
	else
	{
		printf("due");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("Please Choose： 1. or 0.\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("Enter Game\n");
			break;
		case 0:
			printf("Exit Game\n");
			break;
		default:
			printf("Please select again\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}