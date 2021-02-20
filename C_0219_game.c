#include"0219_game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < ROW; i++)
	{
		for ( j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

/*void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < ROW; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2] );
		if (i<row-1)
		printf("---|---|---\n");
	}
} */   //要讓棋盤大小能有彈性變化，下面優化

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);  //印數據
			if (j<col-1)
				printf("|");
		}
		printf("\n");
		//印分隔行
		if (i < row - 1)
		{
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("Player's turn\n");
	while (1)
	{
		printf("Enter the number");
		scanf_s("%d %d", &x, &y);
		//determine the range of x and y is legal
		if (x >= 1 && x<= ROW && y >= 1 && y <= COL)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = 'P';
				break;
			}
			else
			{
				printf("the number is occupied\n");
			}
		}
		else
		{
			printf("out of range, enter again\n");
		}
	}
}

void CPUMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("cpu's turn\n");

	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] == board[i][2] && board[i][1] !=' ')
		{
			return board[i][1];
		}
	}
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] == board[0][i] && board[1][i] != ' ' )
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
