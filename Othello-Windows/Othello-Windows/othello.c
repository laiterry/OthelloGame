/**
* ENGG1110 Problem Solving by Programming
*
* Course Project (Baseline OR Bonus implementation)
*
* I declare that the assignment here submitted is original
* except for source material explicitly acknowledged,
* and that the same or closely related material has not been
* previously submitted for another course.
* I also acknowledge that I am aware of University policy and
* regulations on honesty in academic work, and of the disciplinary
* guidelines and procedures applicable to breaches of such
* policy and regulations, as contained in the website.
*
* University Guideline on Academic Honesty:
* http://www.cuhk.edu.hk/policy/academichonesty/
* Faculty of Engineering Guidelines to Academic Honesty:
* http://star.erg.cuhk.edu.hk/upload/ENGG_Discipline.pdf
*
* Student Name :LAI JINTAO
* Student ID : 1155043805
* Class/Section: L
* Date : April 17
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//#define FILENAME  "G:\\Dropbox_Work\\Dropbox\\2015Term2\\ENGG1110\\Project\\Othello-Windows\\Debug\\board.txt"
#define FILENAME  ".\\board.txt"
////////////////// function:           print_board //////////////////

void print_board(int board[8][8]) {
	/*
	Purpose: print the board using the layout
	described in P.7 of the specification

	No return value.
	*/
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);

	int i = 0, j = 0;



	printf("    0   1   2   3   4   5   6   7\r\n");
	for (i = 0; i < 8; i++)
	{
		

		printf("  +---+---+---+---+---+---+---+---+\r\n");
		printf("%d ", i);
		for (j = 0; j < 8; j++)
		{
			printf("|");
			switch (board[i][j])
			{
			case 0:
				printf("   ");
				break;

			case 1:
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_BLUE  | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);//设置为蓝色
				printf("O●");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
					| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				break;

			case 2:
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED  | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);//设置为绿色
				printf("#▆");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
					| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				break;
			}

		}
		printf("|\r\n");
	}

	printf("  +---+---+---+---+---+---+---+---+\r\n");



}

////////////////// function:    print_game_details //////////////////

void print_game_details(int board[8][8], int current_player) {
	/*
	Purpose: print the game details as described in
	P.9 of the specification

	No return value.
	*/
	int i = 0, j = 0,player_1 = 0, player_2 = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			switch (board[i][j])
			{
			case 0:
				break;

			case 1:
				player_1++;
				break;

			case 2:
				player_2++;
				break;
			}

		}
	}


	printf("Player O : %d\t\t Player # : %d\r\n", player_1, player_2);
	printf("Current Turn : %d\r\n", current_player);
		
}

////////////////// function:             need_pass //////////////////

int need_pass(int board[8][8], int current_player) {
	/*
	Purpose: to determine if current_player can find at least one cell
	to place a new disc

	Return value:
	0: can find at least one cell.
	1: cannot find any cell.
	*/
	return 0;
}


////////////////// function:          is_end_game //////////////////

int is_end_game(int board[8][8]) {
	/*
	Purpose: to determine if the game has been ended or not

	Return value:
	0: false, i.e., the game is not ended.
	1: true,  i.e., the game is ended.
	*/
	return 0;
}

////////////////// function: is_wrong_input_range //////////////////

int is_wrong_input_range(int row, int column) {
	/*
	Purpose: to determine if the input is in the wrong range

	Return value:
	0: no,  i.e., correct input.
	1: yes, i.e., wrong input.
	*/

	if (row < 0 || row > 7 || column < 0 || column > 7)
		return 1;
	else
		return 0;

	
}

////////////////// function:        is_empty_cell //////////////////

int is_empty_cell(int board[8][8], int row, int column) {
	/*
	Purpose: to determine if (row, column) refers to an empty cell

	Return value:
	0: no,  i.e., not empty.
	1: yes, i.e., empty.
	*/
	if (board[row][column] != 0)
		return 0;
	else
		return 1;
	
}

////////////////// function:    can_flip_opponent //////////////////

int can_flip_opponent(int board[8][8], int row, int column, int current_player) {
	/*
	Purpose: to determine the new disc in (row, column)
	can flip any opponent's discs

	Return value:
	0: no,  i.e., cannot flip.
	1: yes, i.e., can flip.
	*/
	if ()



	return 1;
}

////////////////// function:        flip_opponent //////////////////

void flip_opponent(int board[8][8], int row, int column, int current_player) {
	/*
	Purpose: using a new disc in (row, column) to flip opponent's disc

	Because "board" is an array, update it in this function
	will also change the variable in the main function.

	No return value.
	*/
}

////////////////// function:         print_winner //////////////////

void print_winner(int board[8][8]) {
	/*
	Purpose:
	- print number of 'O' in the board;
	- print number of '#' in the board;
	- print who the winner is / draw grame
	*/
}

///////////////// Main /////////////////

int main(int argc, char **argv) {
	int current_player = 1;  // current_player can be 1 or 2;
	int board[8][8];           // store the current game board
	int row, column, mode, stop, all_test_pass;

	printf("Select Mode: [1. Normal Mode | 2. Debug Mode] ?\n");
	scanf("%d", &mode);
	system("cls");
	/*
	Do your work below:

	mode == 1: normal mode
	mode == 2: debug mode

	So, please initialize the board variable accordingly.
	*/

	if (mode == 1) {
		/*
		Initialize the board as instructed in
		P.3 of the specification.
		*/

		int i = 0, j = 0;
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				board[i][j] = 0;
			}
		}
		board[3][4] = 1;
		board[4][3] = 1;
		board[3][3] = 2;
		board[4][4] = 2;
	}
	else if (mode == 2) {
		/*
		Initialize the board based on the
		input file format as described in
		P.7 of the specification.
		*/
		int i = 0, j = 0;
		FILE *fptr;
		int num;
		fptr = fopen(FILENAME, "r"); // open file

		if (fptr == NULL) {
			printf("Cannot open file!\n");
			scanf("%d", &num);
			return 0;
		}

		while (1) {
			if (fscanf(fptr,"%d", &num) != 1)
				break;

			// Process num here
			board[i][j] = num;
			j++;
			if (j == 8)
			{
				j = 0;
				i++;
			}
		}
		fclose(fptr); // close file
	//	print_board(board);
	}


	stop = 0;

	while (stop == 0) { // the big game loop begins

		print_board(board);
		print_game_details(board, current_player);

		if (is_end_game(board) == 1) {
			stop = 1;
		}

		if (need_pass(board, current_player) == 1) {
			printf("You have to pass this turn\n");
		}
		else {
			/*
			Inside the else body, you have several things to do.

			- Read input.

			- Check if "row" & "column" are in the wrong input range
			[ Case 1, table in P.10 of specification ]

			- If "row" & "column" are in the correct input range,
			check if (row, column) points to an empty cell
			[ Case 2, table in P.10 of specification ]

			- If (row, column) points to an empty cell,
			check if the new disc in (row, column) can flip any
			opponent's discs
			[ Case 3, table in P.10 of specification ]


			When (row, column) passes all the above three tests,
			flip the opponent's discs
			*/

	

			do {
				printf("\r\n");
				all_test_pass = 1;
				printf("Row:[0 - 7] : ");
				scanf("%d", &row);
				printf("Column:[0 - 7] : ");
				scanf("%d",&column);

				if (is_wrong_input_range(row, column) == 1) {
					printf("Wrong input range\n");
					all_test_pass = 0;
				}
				else if (is_empty_cell(board, row, column) == 0) {
					printf("Invalid location(not empty): (%d,%d) \n", row, column);
					all_test_pass = 0;
				}
				else if (can_flip_opponent(board, row, column, current_player) == 0) {
					printf("Invalid location(can not flip): (%d,%d) \n", row, column);
					all_test_pass = 0;
				}

				if (all_test_pass == 1) {
					flip_opponent(board, row, column, current_player);
				}

			} while (all_test_pass == 0);

		} // end of else body //

		/*
		Important!!!!!!!!!!

		You must change the current player before
		going back to the start of the big game loop.

		Add the code below!
		*/

		if (current_player == 1)
			current_player = 2;
		else
			current_player = 1;


	}  // the big game loop ends

	print_board(board);
	print_winner(board);
	return 0;
}
