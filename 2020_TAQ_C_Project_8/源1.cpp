
#include <stdio.h>

#include <windows.h>

#include <stdlib.h>  

#include <time.h>
#include<conio.h>

#define ROW 3  //�������

#define COL 3  //�������


void game();

int c, d;
int p, q;

int a[100];
int b[100];
int m[100];
int n[100];



#pragma warning(disable:4996)  

static void displayBoard1(char board2[][COL], int row)   //������ʾ���̵ĺ���

{
	system("CLS");     //��������������ʹ�������

	int i = 0;



	for (; i < row; i++)

	{

		printf(" %c | %c | %c \n", board2[i][0], board2[i][1], board2[i][2]);


		if (i < row - 1)

		{

			printf("---|---|---\n");

		}

	}
}


	

static void displayBoard(char board[][COL], int row)   //������ʾ���̵ĺ���

{
	system("CLS");          //��������


	int i = 0;

	for (; i < row; i++)

	{

		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);

		if (i < row - 1)

		{

			printf("---|---|---\n");

		}

	}

}

static void playerMove(char board[][COL], int row)    //��ҷ����Ӻ���

{
	int e;
	

	do {

		

		

		if (p >=0 && p <3 && q >= 0 && q < 3)  //��ֹ��������������

		{

			if (board[p][q ] == ' ')       //�ж����飨���̣��Ƿ�Ϊ��

			{

				board[p ][q ] = 'o'; //��o����ʾ��ҵ�����
				a[c] = p;
				b[c] = q;

				break;

			}

			

		}

		else

		{

			printf("Please Enter Right Place\n");

		}

	} while (1);

}

static void compMove(char board[][COL], int row)  

{

	
	int e,k;
	e = 1; k = 1;
	if (board[0][0]=='x' && board[1][1] == 'x'&&board[2][2]==' ')
	{
		board[2][2] = 'x'; 
		
	}
	else if (board[0][0] == 'x' && board[2][2] == 'x'&&board[1][1]==' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][2] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	else if (board[0][1] == 'x' && board[0][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][0] == 'x' && board[1][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[1][2] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}

	else if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[2][0] == 'x' && board[2][2] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[2][1] == 'x' && board[2][2] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}

	else if (board[1][1] == 'x' && board[0][1] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[0][1] == 'x' && board[2][1] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][1] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}

	else if (board[1][0] == 'x' && board[0][0] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][0] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}
	else if (board[1][0] == 'x' && board[2][0] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][2] == 'x' && board[0][2] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][2] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][2] == 'x' && board[2][2] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}

	else if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == ' ')
	{
		board[3][1] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][0] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	

	else {
		while (e==1) {

			int x = rand() % ROW;   

			int y = rand() % COL;   



			if (board[x][y] == ' ')  

			{

				if (d <= 2)
				
				{

					board[x][y] = 'x';   //��x��ʾ��������
					m[d] = x;
					n[d] = y;
					break;

				}
				else

				{
					
						 if (board[x +1][y +1] == 'o' && board[x + 2][y + 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						else if (board[x - 1][y - 1] == 'o' && board[x + 1][y + 1] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y - 1] == 'o' && board[x - 2][y - 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y + 1] == 'o' && board[x][y + 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y - 1] == 'o' && board[x][y - 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y + 1] == 'o' && board[x][y - 1] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y] == 'o' && board[x + 2][y] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y] == 'o' && board[x - 1][y] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y] == 'o' && board[x - 2][y] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y + 1] == 'o' && board[x - 2][y + 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y - 1] == 'o' && board[x + 2][y - 2] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y - 1] == 'o' && board[x - 1][y + 1] == 'o')
						{
							board[x][y] = 'x';   //��x��ʾ��������
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						
						 k = k + 1;
						 if (k >50) //�Ѷ�
						 {
							 board[x][y] = 'x';   //��x��ʾ��������
							 m[d] = x;
							 n[d] = y; 
							
							 e = 0;
						 }
						
						

					
				}









				



			}




		} 
	}
	

}
static void compMove2(char board[][COL], int row)  //�����ƶ�

{

	srand((unsigned long)time(NULL));    //����һ�������

	if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][2] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	else if (board[0][1] == 'x' && board[0][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][0] == 'x' && board[1][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[1][2] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}

	else if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[2][0] == 'x' && board[2][2] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[2][1] == 'x' && board[2][2] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}

	else if (board[1][1] == 'x' && board[0][1] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[0][1] == 'x' && board[2][1] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][1] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}

	else if (board[1][0] == 'x' && board[0][0] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][0] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}
	else if (board[1][0] == 'x' && board[2][0] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][2] == 'x' && board[0][2] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][2] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][2] == 'x' && board[2][2] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}

	else if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == ' ')
	{
		board[3][1] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][0] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}


	else {
		while (1) {

			int x = rand() % ROW;   //ʹ����������귶Χ��

			int y = rand() % COL;   //ʹ����������귶Χ��



			if (board[x][y] == ' ')  //�жϴ�λ���Ƿ��Ѿ���ռ λ���Ƿ����

			{

				if (d <= 2)

				{

					board[x][y] = 'x';   //��x��ʾ��������
					m[d] = x;
					n[d] = y;
					break;

				}
				else

				{

					if (board[x + 1][y + 1] == 'o' && board[x + 2][y + 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y - 1] == 'o' && board[x + 1][y + 1] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y - 1] == 'o' && board[x - 2][y - 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y + 1] == 'o' && board[x][y + 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y - 1] == 'o' && board[x][y - 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y + 1] == 'o' && board[x][y - 1] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y] == 'o' && board[x + 2][y] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y] == 'o' && board[x - 1][y] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y] == 'o' && board[x - 2][y] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y + 1] == 'o' && board[x - 2][y + 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y - 1] == 'o' && board[x + 2][y - 2] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y - 1] == 'o' && board[x - 1][y + 1] == 'o')
					{
						board[x][y] = 'x';   //��x��ʾ��������
						m[d] = x;
						n[d] = y;
						break;
					}





				}













			}




		}
	}


}


static void del1 (char board[][COL], int row) //ɾ������
{
	

		if (c >= 4)
		{
			
			board[a[c - 3]][b[c - 3]] = ' ';
			

		}
		




}
static void del2(char board[][COL], int row) //ɾ������
{
	

		if ( d>=4)
		{
			board[m[d -3]][n[d -3]] = ' ';
			
		


		}
		




}



static char isWin(char board[][COL], int row)   //�ж��Ƿ�Ӯ�˵ĺ���

{

	int i = 0;

	for (; i < ROW; i++)   //�ж����Ƿ�����

	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')

		{

			return board[i][0];   //���ع�����������

		}

	}
	 i = 0;

	for (; i < 3; i++)   //�ж����Ƿ�����

	{

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')

		{

			return board[1][i];

		}

	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')  //�ж��ҶԽ����Ƿ�����

	{

		return board[0][0];

	}

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')   //�ж���Խ����Ƿ�����

	{

		return board[2][0];

	}

	

	return ' ';

}







void game()

{
	c = 1;
	d = 1;

	
	char board[ROW][COL]; char board2[ROW][COL];

	memset(board, ' ', ROW * COL);   //������ȫ����ʼ��Ϊ�ո�

	char ret;

	do {
		
		displayBoard(board, COL);  //������ʾ����
        compMove(board, COL);
		del2(board, COL);
		displayBoard(board, COL);  //������ʾ����
		 ret = isWin(board, COL);
		if (ret != ' ')
		{
			break;
		}
		
			p = 1;
			q = 1;
			int abc[5][5];
			int j, k;
			abc[p][q] = board[1][1];

        j = 0;
		while (j==0)
		{
			board[p][q] = '+';
			displayBoard(board, COL);  //������ʾ����
			board[p][q] =abc[p][q] ;
			char ch = getch();
			switch (ch)
			{
				abc[p][q] = board[p][q];
			case 27://esc
				exit(0);
			case 72://��
					  p--;
					  if (p < 0)p = 2;
					 abc[p][q] = board[p][q];  
					break;
			case 80://xia
				p++;
				if (p >2)p = 0;
				abc[p][q] = board[p][q];
				break;
			case 75://zuo
				q--;
				if (q < 0)q = 2;
				abc[p][q] = board[p][q];
				break;
			case 77://you
				q++;
				if (q > 2)q = 0;
				abc[p][q] = board[p][q];
				break;
			case 32://�ո�
				if (board[p][q] == ' ')
				{
					board[p][q] = 'o'; 
					a[c] = p;
					b[c] = q;
					j = 1;
						
					
				}
				else {
					j = 0;
				}
				break;
					

			}
			
			
		}
		
		 del1(board, COL);
		
	
		ret = isWin(board, COL);    //�Ƿ�������

		if (ret != ' ')
		{
			break;
		}


		displayBoard(board, COL);
		d = d + 1;
		c = c + 1;
		

	} while (ret == ' ');

	if (ret == 'o')    //����ֵΪo���ʾ���Ӯ��

	{

		printf("nice,you win\n");

	}

	else if (ret == 'x')   //����ֵΪx���ʾ����Ӯ��

	{
		
		printf("you lose,try again\n");

	}


}