#include"0219_Mine.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j <cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// print 行號
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for ( j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';  //相當於計算有幾個mine
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	
	while (win<row*col-EASY_COUNT)
	{
		printf("\nPlease enter your coordinate:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			// legal coordinate
			// 1.踩雷
			if (mine[x][y] == '1')
			{
				printf("\n!!!Sadly, you're blowed up!!!\n\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else  //不是雷
			{
				//calculate the number of mine around the corrdinate
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				printf("\n");
				DisplayBoard(show, row, col);
				printf("\nSafe, continue to demine\n\n");
				win++;
			}
		}
		else  
		{
			printf("\nillegal coordinate, Please enter again");
		}
	}
	if (win == row*col-EASY_COUNT)
	{
		printf("\nCongrats!!! Successful demine!!!\n");
		DisplayBoard(mine, row, col);
	}
}

//寫展開功能 用到recurrence