/*
Name: Brandon Ryan
Course: CECS 130-02
Lab #11
Date: 3/25/2019
Description: Tic-Tac-Toe Program Final
*/

#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <cstdlib>

char square[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char square2[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char square3[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';
int b;
int y;
int z;
int t;


void game_display()
{
	system("cls");
	cout<<" "<<endl;
cout<<"\t\tTic-Tac-Toe Game"<<endl;

cout<<" \n"<<endl;
cout<<"\t\t     Board 1\n"<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t    "<<square[0][0]<< "     |     "<<square[0][1]<< "    |    "<<square[0][2]<<"     "<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t--------------------------------"<<endl;     
cout<<"\t          |          |          "<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t    "<<square[1][0]<< "     |     "<<square[1][1]<< "    |    "<<square[1][2]<<"     "<<endl;
cout<<"\t          |          |          "<<endl;
cout<<"\t          |          |          "<<endl;     	
cout<<"\t--------------------------------"<<endl; 
cout<<"\t          |          |          "<<endl;  
cout<<"\t          |          |          "<<endl;  
cout<<"\t    "<<square[2][0]<< "     |     "<<square[2][1]<< "    |    "<<square[2][2]<<"     "<<endl; 
cout<<"\t          |          |          "<<endl;  
cout<<"\t          |          |          "<<endl;

cout<<" \n"<<endl;
cout<<"\t\t\t     Board 2\n"<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t    "<<square2[0][0]<< "     |     "<<square2[0][1]<< "    |    "<<square2[0][2]<<"     "<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t--------------------------------"<<endl;     
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t    "<<square2[1][0]<< "     |     "<<square2[1][1]<< "    |    "<<square2[1][2]<<"     "<<endl;
cout<<"\t\t          |          |          "<<endl;
cout<<"\t\t          |          |          "<<endl;     	
cout<<"\t\t--------------------------------"<<endl; 
cout<<"\t\t          |          |          "<<endl;  
cout<<"\t\t          |          |          "<<endl;  
cout<<"\t\t    "<<square2[2][0]<< "     |     "<<square2[2][1]<< "    |    "<<square2[2][2]<<"     "<<endl; 
cout<<"\t\t          |          |          "<<endl;  
cout<<"\t\t          |          |          "<<endl;

cout<<" \n"<<endl;
cout<<"\t\t\t\t    Board 3\n"<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t    "<<square3[0][0]<< "     |     "<<square3[0][1]<< "    |    "<<square3[0][2]<<"     "<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t--------------------------------"<<endl;     
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t    "<<square3[1][0]<< "     |     "<<square3[1][1]<< "    |    "<<square3[1][2]<<"     "<<endl;
cout<<"\t\t\t          |          |          "<<endl;
cout<<"\t\t\t          |          |          "<<endl;     	
cout<<"\t\t\t--------------------------------"<<endl; 
cout<<"\t\t\t          |          |          "<<endl;  
cout<<"\t\t\t          |          |          "<<endl;  
cout<<"\t\t\t    "<<square3[2][0]<< "     |     "<<square3[2][1]<< "    |    "<<square3[2][2]<<"     "<<endl; 
cout<<"\t\t\t          |          |          "<<endl;  
cout<<"\t\t\t          |          |          "<<endl;	
}



void Input()
{
	/*CPU (1) Board 1*/
	if (player == 'X')
	{
		/*CPU (1) Board */
		int CPUoneBoard = rand() % 3 + 1;
		if (CPUoneBoard == 1)
		{
			cout<<"CPU's (1) Turn\n"<<endl;	
			int CPUone = rand() % 9 + 1;
			
			if (CPUone == 1)
			{
				if (square[0][0] == '1')
					square[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 2)
			{
				if (square[0][1] == '2')
					square[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		
			else if (CPUone == 3)
			{
				if (square[0][2] == '3')
					square[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 4)
			{
				if (square[1][0] == '4')
					square[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 5)
			{
				if (square[1][1] == '5')
					square[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 6)
			{
				if (square[1][2] == '6')
					square[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 7)
			{
				if (square[2][0] == '7')
					square[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 8)
			{
				if (square[2][1] == '8')
					square[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 9)
			{
				if (square[2][2] == '9')
					square[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
		
		/*CPU (1) Board 2*/
		else if (CPUoneBoard == 2)		
		{
			cout<<"CPU's (1) Turn\n"<<endl;	
			int CPUone = rand() % 9 + 1;
			
			if (CPUone == 1)
			{
				if (square2[0][0] == '1')
					square2[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 2)
			{
				if (square2[0][1] == '2')
					square2[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		
			else if (CPUone == 3)
			{
				if (square2[0][2] == '3')
					square2[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 4)
			{
				if (square2[1][0] == '4')
					square2[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 5)
			{
				if (square2[1][1] == '5')
					square2[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 6)
			{
				if (square2[1][2] == '6')
					square2[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 7)
			{
				if (square2[2][0] == '7')
					square2[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 8)
			{
				if (square2[2][1] == '8')
					square2[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 9)
			{
				if (square2[2][2] == '9')
					square2[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
		
		/*CPU (1) Board 3*/
		else if (CPUoneBoard == 3)		
		{
			cout<<"CPU's (1) Turn\n"<<endl;	
			int CPUone = rand() % 9 + 1;
			
			if (CPUone == 1)
			{
				if (square3[0][0] == '1')
					square3[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 2)
			{
				if (square3[0][1] == '2')
					square3[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		
			else if (CPUone == 3)
			{
				if (square3[0][2] == '3')
					square3[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 4)
			{
				if (square3[1][0] == '4')
					square3[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 5)
			{
				if (square3[1][1] == '5')
					square3[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 6)
			{
				if (square3[1][2] == '6')
					square3[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 7)
			{
				if (square3[2][0] == '7')
					square3[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 8)
			{
				if (square3[2][1] == '8')
					square3[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUone == 9)
			{
				if (square3[2][2] == '9')
					square3[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
	}
	
	/*CPU PLAYER 2*/
	
	if (player == 'O')
	{
		/*CPU (2) Board 1*/
		int CPUtwoBoard = rand() % 3 + 1;
		if (CPUtwoBoard == 1)
		{
		
			cout<<"CPU's Turn\n"<<endl;	
			int CPUtwo = rand() % 9 + 1;
			
			if (CPUtwo == 1)
			{
				if (square[0][0] == '1')
					square[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 2)
			{
				if (square[0][1] == '2')
					square[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		
			else if (CPUtwo == 3)
			{
				if (square[0][2] == '3')
					square[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 4)
			{
				if (square[1][0] == '4')
					square[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 5)
			{
				if (square[1][1] == '5')
					square[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 6)
			{
				if (square[1][2] == '6')
					square[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 7)
			{
				if (square[2][0] == '7')
					square[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 8)
			{
				if (square[2][1] == '8')
					square[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 9)
			{
				if (square[2][2] == '9')
					square[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
		/*CPU (2) Board 2*/
		else if (CPUtwoBoard == 2)
		{
		
			cout<<"CPU's Turn\n"<<endl;	
			int CPUtwo = rand() % 9 + 1;
			
			if (CPUtwo == 1)
			{
				if (square2[0][0] == '1')
					square2[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 2)
			{
				if (square2[0][1] == '2')
					square2[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 3)
			{
				if (square2[0][2] == '3')
					square2[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 4)
			{
				if (square2[1][0] == '4')
					square2[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 5)
			{
				if (square2[1][1] == '5')
					square2[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 6)
			{
				if (square2[1][2] == '6')
					square2[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 7)
			{
				if (square2[2][0] == '7')
					square2[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 8)
			{
				if (square2[2][1] == '8')
					square2[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 9)
			{
				if (square2[2][2] == '9')
					square2[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
		/*CPU (2) Board 3*/
		else if (CPUtwoBoard == 3)
		{
			cout<<"CPU's Turn\n"<<endl;	
			int CPUtwo = rand() % 9 + 1;
			
			if (CPUtwo == 1)
			{
				if (square3[0][0] == '1')
					square3[0][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 2)
			{
				if (square3[0][1] == '2')
					square3[0][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		
			else if (CPUtwo == 3)
			{
				if (square3[0][2] == '3')
					square3[0][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 4)
			{
				if (square3[1][0] == '4')
					square3[1][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 5)
			{
				if (square3[1][1] == '5')
					square3[1][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 6)
			{
				if (square3[1][2] == '6')
					square3[1][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 7)
			{
				if (square3[2][0] == '7')
					square3[2][0] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 8)
			{
				if (square3[2][1] == '8')
					square3[2][1] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
			else if (CPUtwo == 9)
			{
				if (square3[2][2] == '9')
					square3[2][2] = player;
				else
				{
					cout<<"\nSquare is already filled, please try again!\n"<<endl;
					Input();
				}
			}
		}
	}
}

void alternate()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char winner()
{
	/*Player 1*/
	/*Board 1*/
	if (square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X')
	return 'X';
	if (square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X')
	return 'X';
	if (square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X')
	return 'X';
	if (square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X')
	return 'X';
	if (square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X')
	return 'X';
	if (square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X')
	return 'X';
	if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X')
	return 'X';
	if (square[2][0] == 'X' && square[1][1] == 'X' && square[0][2] == 'X')
	return 'X';
	/*Board 2*/
	if (square2[0][0] == 'X' && square2[0][1] == 'X' && square2[0][2] == 'X')
	return 'X';
	if (square2[1][0] == 'X' && square2[1][1] == 'X' && square2[1][2] == 'X')
	return 'X';
	if (square2[2][0] == 'X' && square2[2][1] == 'X' && square2[2][2] == 'X')
	return 'X';
	if (square2[0][0] == 'X' && square2[1][0] == 'X' && square2[2][0] == 'X')
	return 'X';
	if (square2[0][1] == 'X' && square2[1][1] == 'X' && square2[2][1] == 'X')
	return 'X';
	if (square2[0][2] == 'X' && square2[1][2] == 'X' && square2[2][2] == 'X')
	return 'X';
	if (square2[0][0] == 'X' && square2[1][1] == 'X' && square2[2][2] == 'X')
	return 'X';
	if (square2[2][0] == 'X' && square2[1][1] == 'X' && square2[0][2] == 'X')
	return 'X';
	/*Board 3*/
	if (square3[0][0] == 'X' && square3[0][1] == 'X' && square3[0][2] == 'X')
	return 'X';
	if (square3[1][0] == 'X' && square3[1][1] == 'X' && square3[1][2] == 'X')
	return 'X';
	if (square3[2][0] == 'X' && square3[2][1] == 'X' && square3[2][2] == 'X')
	return 'X';
	if (square3[0][0] == 'X' && square3[1][0] == 'X' && square3[2][0] == 'X')
	return 'X';
	if (square3[0][1] == 'X' && square3[1][1] == 'X' && square3[2][1] == 'X')
	return 'X';
	if (square3[0][2] == 'X' && square3[1][2] == 'X' && square3[2][2] == 'X')
	return 'X';
	if (square3[0][0] == 'X' && square3[1][1] == 'X' && square3[2][2] == 'X')
	return 'X';
	if (square3[2][0] == 'X' && square3[1][1] == 'X' && square3[0][2] == 'X')
	return 'X';
	/*In-Between wins*/
	if (square[0][0] == 'X' && square2[0][0] == 'X' && square3[0][0] == 'X')
	return 'X';
	if (square[0][1] == 'X' && square2[0][1] == 'X' && square3[0][1] == 'X')
	return 'X';
	if (square[0][2] == 'X' && square2[0][2] == 'X' && square3[0][2] == 'X')
	return 'X';
	if (square[1][0] == 'X' && square2[1][0] == 'X' && square3[1][0] == 'X')
	return 'X';
	if (square[1][1] == 'X' && square2[1][1] == 'X' && square3[1][1] == 'X')
	return 'X';
	if (square[1][2] == 'X' && square2[1][2] == 'X' && square3[1][2] == 'X')
	return 'X';
	if (square[2][0] == 'X' && square2[2][0] == 'X' && square3[2][0] == 'X')
	return 'X';
	if (square[2][1] == 'X' && square2[2][1] == 'X' && square3[2][1] == 'X')
	return 'X';
	if (square[2][2] == 'X' && square2[2][2] == 'X' && square3[2][2] == 'X')
	return 'X';
	if (square[0][0] == 'X' && square2[1][1] == 'X' && square3[2][2] == 'X')
	return 'X';
	if (square[0][2] == 'X' && square2[1][1] == 'X' && square3[2][0] == 'X')
	return 'X';

	/*Player 2*/
	/*Board 1*/
	if (square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O')
	return 'O';
	if (square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O')
	return 'O';
	if (square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O')
	return 'O';
	if (square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O')
	return 'O';
	if (square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O')
	return 'O';
	if (square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O')
	return 'O';
	if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O')
	return 'O';
	if (square[2][0] == 'O' && square[1][1] == 'O' && square[0][2] == 'O')
	return 'O';
	/*Board 2*/
	if (square2[0][0] == 'O' && square2[0][1] == 'O' && square2[0][2] == 'O')
	return 'O';
	if (square2[1][0] == 'O' && square2[1][1] == 'O' && square2[1][2] == 'O')
	return 'O';
	if (square2[2][0] == 'O' && square2[2][1] == 'O' && square2[2][2] == 'O')
	return 'O';
	if (square2[0][0] == 'O' && square2[1][0] == 'O' && square2[2][0] == 'O')
	return 'O';
	if (square2[0][1] == 'O' && square2[1][1] == 'O' && square2[2][1] == 'O')
	return 'O';
	if (square2[0][2] == 'O' && square2[1][2] == 'O' && square2[2][2] == 'O')
	return 'O';
	if (square2[0][0] == 'O' && square2[1][1] == 'O' && square2[2][2] == 'O')
	return 'O';
	if (square2[2][0] == 'O' && square2[1][1] == 'O' && square2[0][2] == 'O')
	return 'O';
	/*Board 3*/
	if (square3[0][0] == 'O' && square3[0][1] == 'O' && square3[0][2] == 'O')
	return 'O';
	if (square3[1][0] == 'O' && square3[1][1] == 'O' && square3[1][2] == 'O')
	return 'O';
	if (square3[2][0] == 'O' && square3[2][1] == 'O' && square3[2][2] == 'O')
	return 'O';
	if (square3[0][0] == 'O' && square3[1][0] == 'O' && square3[2][0] == 'O')
	return 'O';
	if (square3[0][1] == 'O' && square3[1][1] == 'O' && square3[2][1] == 'O')
	return 'O';
	if (square3[0][2] == 'O' && square3[1][2] == 'O' && square3[2][2] == 'O')
	return 'O';
	if (square3[0][0] == 'O' && square3[1][1] == 'O' && square3[2][2] == 'O')
	return 'O';
	if (square3[2][0] == 'O' && square3[1][1] == 'O' && square3[0][2] == 'O')
	return 'O';
	/*In-Between wins*/
	if (square[0][0] == 'O' && square2[0][0] == 'O' && square3[0][0] == 'O')
	return 'O';
	if (square[0][1] == 'O' && square2[0][1] == 'O' && square3[0][1] == 'O')
	return 'O';
	if (square[0][2] == 'O' && square2[0][2] == 'O' && square3[0][2] == 'O')
	return 'O';
	if (square[1][0] == 'O' && square2[1][0] == 'O' && square3[1][0] == 'O')
	return 'O';
	if (square[1][1] == 'O' && square2[1][1] == 'O' && square3[1][1] == 'O')
	return 'O';
	if (square[1][2] == 'O' && square2[1][2] == 'O' && square3[1][2] == 'O')
	return 'O';
	if (square[2][0] == 'O' && square2[2][0] == 'O' && square3[2][0] == 'O')
	return 'O';
	if (square[2][1] == 'O' && square2[2][1] == 'O' && square3[2][1] == 'O')
	return 'O';
	if (square[2][2] == 'O' && square2[2][2] == 'O' && square3[2][2] == 'O')
	return 'O';
	if (square[0][0] == 'O' && square2[1][1] == 'O' && square3[2][2] == 'O')
	return 'O';
	if (square[0][2] == 'O' && square2[1][1] == 'O' && square3[2][0] == 'O')
	return 'O';

	return '/';
}


int main()
{
	srand(time(NULL));
	b = 0;
	t = 0;
	game_display();


		while (1)
		{
				b++;
				Input();
				game_display();
				if(winner() == 'X')
				{
					z = 0;
					z++;
					break;
				}
				else if (winner() == 'O')
				{
					y = 0;
					y++;
					
					break;	
				}
				else if (winner() == '/' && b == 27)
				{
					break;
				}
				alternate();
		}

	if (z>y)
	{
		cout<<"\nCPU (1) (X) wins "<<z<<" to "<<y<<endl;
	}
	else if (y>z)
	{ 
		cout<<"\nCPU (2) (O) wins "<<y<<" to "<<z<<endl;
	}
	else if (z == y)
	{
		cout<<"It is a draw!!\n"<<endl;
	}
	
	system("pause");
	return 0;
		
}



