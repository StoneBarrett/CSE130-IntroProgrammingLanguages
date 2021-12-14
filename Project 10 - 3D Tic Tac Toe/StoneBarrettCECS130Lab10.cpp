// Program: Tic-Tac-Toe 3D
// Description: The program displays a 3D tic-tac-toe board and plays a match against the user.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 4/12/19

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;
using std::string;

class Game
{
	protected:
		int winner;
	
	
	public: 
		void welcome();
};

void Game::welcome()
{
	cout << "Tic-Tac-Toe 3D" << endl;
	cout << "Tic, Tac, and Toe across three dimensions! Try to get more points than CPU!" << endl;
}

class Board:
	
	public Game
	{
		private:
			int grid[3][3][3];
			int first;
			int points[1];
			int computer;
			int player;
			
		public:
			Board();
			
			void setCell(int x, int y, int z, int value);
			void getWinner();
			int setWinner(int value);
			
			void makeMove();
			void playerMove();
			void computerMove();
			
			void printGrid();
			bool isValid(int x, int y, int z);
			void error(int x, int y, int z);
			void checkWinner();
			bool isOver();
			void goesFirst();
		};
		
Board::Board()
{
	setWinner(0);
			
	for (int loopVal = 0; loopVal < 9; loopVal++)
	{
		setCell((loopVal / 3), (loopVal % 3), 0, 0);
		setCell((loopVal / 3), (loopVal % 3), 1, 0);
		setCell((loopVal / 3), (loopVal % 3), 2, 0);
				
	}
}
	
void Board::goesFirst()
{
	srand(time(NULL));
	first = (rand()%100)>49?0:1;
	
	if (first == 0)
	{
		cout << "Player makes the first move!\n" << endl;
	}
	
	else
	{
		cout << "CPU makes the first move!\n" << endl;
	}
	
	system("pause");
}		

void Board::getWinner()
{
	cout << "Final Score" << endl;
	cout << "Player: " << points[0] << endl;
	cout << "CPU: " << points[1] << endl;
	
	if (points[0] > points[1])
	{
		cout << "You won! :)" << endl;
	}
	
	else if (points[1] > points[0])
	{
		cout << "Better luck next time!" << endl;
	}
	
	else if (points[0] == points[1])
	{
		cout << "Scratch! Match ended in a draw." << endl;
	}
}

int Board::setWinner(int value)
{
	Game::winner = value;
}

void Board::setCell(int x, int y, int z, int value)
{
	grid[x][y][z] = value;
}

bool Board::isValid(int x, int y, int z)
{
	return ((x > -1) && (x < 3) && (y > -1) && (y < 3) && (z > -1) && (z < 3) && !(grid[x][y][z]));
}

void Board::error(int x, int y, int z)
{
	if ((x < -1) || (x > 3) || (y < -1) || (y > 3) || (z < -1) || (z > 3))
	{
		cout << "Please enter valid row, column, and board numbers." << endl;
	}
	
	else if (grid[x][y][z])
	{
		cout << "The cell you chose is already taken!" << endl;
	}
}

string dispChar(int num)
{
	string c = " ";
	
	if (num)
	{
		if (num == 3)
		{
			c = "X";
		}
		
		else
		{
			c = "O";
		}
	}
	
	else
	{
		c = " ";
	}
	
	return c;
	
}

void Board::printGrid()
{
	cout << " Board 0: " << endl;
	cout << "   0 | 1 | 2 " << endl;
	cout << " ------------" << endl;
	cout << " |   |   |   " << endl;
	cout << "0| " << dispChar(grid[0][0][0]).c_str() << " | " << dispChar(grid[1][0][0]).c_str() << " | " << dispChar(grid[2][0][0]).c_str() << " " << endl;
    cout << " |   |   |   " << endl;
    cout << " ------------" << endl;
    cout << " |   |   |   " << endl;
    cout << "1| " << dispChar(grid[0][1][0]).c_str() << " | " << dispChar(grid[1][1][0]).c_str() << " | " << dispChar(grid[2][1][0]).c_str() << " " << endl;
    cout << " |   |   |   " << endl;
    cout << " ------------" << endl;
    cout << " |   |   |   " << endl;
    cout << "2| " << dispChar(grid[0][2][0]).c_str() << " | " << dispChar(grid[1][2][0]).c_str() << " | " << dispChar(grid[2][2][0]).c_str() << " " << endl;
    cout << " |   |   |   " << endl;
    cout << endl;
    
    cout << "\t Board 1: " << endl;
    cout << "\t   0 | 1 | 2 " << endl;
    cout << "\t ------------" << endl;
    cout << "\t |   |   |   " << endl;
    cout << "\t0| " << dispChar(grid[0][0][1]).c_str() << " | " << dispChar(grid[1][0][1]).c_str() << " | " << dispChar(grid[2][0][1]).c_str() << " " << endl;
    cout << "\t |   |   |   " << endl;
    cout << "\t ------------" << endl;
    cout << "\t |   |   |   " << endl;
    cout << "\t1| " << dispChar(grid[0][1][1]).c_str() << " | " << dispChar(grid[1][1][1]).c_str() << " | " << dispChar(grid[2][1][1]).c_str() << " " << endl;
    cout << "\t |   |   |   " << endl;
    cout << "\t ------------" << endl;
    cout << "\t |   |   |   " << endl;
    cout << "\t2| " << dispChar(grid[0][2][1]).c_str() << " | " << dispChar(grid[1][2][1]).c_str() << " | " << dispChar(grid[2][2][1]).c_str() << " " << endl;
    cout << "\t |   |   |   " << endl;
    cout << endl;
    
    cout << "\t\t Board 2: " << endl;
    cout << "\t\t   0 | 1 | 2 " << endl;
    cout << "\t\t ------------" << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << "\t\t0| " << dispChar(grid[0][0][2]).c_str() << " | " << dispChar(grid[1][0][2]).c_str() << " | " << dispChar(grid[2][0][2]).c_str() << " " << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << "\t\t ------------" << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << "\t\t1| " << dispChar(grid[0][1][2]).c_str() << " | " << dispChar(grid[1][1][2]).c_str() << " | " << dispChar(grid[2][1][2]).c_str() << " " << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << "\t\t ------------" << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << "\t\t2| " << dispChar(grid[0][2][2]).c_str() << " | " << dispChar(grid[1][2][2]).c_str() << " | " << dispChar(grid[2][2][2]).c_str() << " " << endl;
    cout << "\t\t |   |   |   " << endl;
    cout << endl << endl;
}

void Board::checkWinner()
{
	points[0] = 0;
	points[1] = 1;
	computer = 0;
	player = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[0][j][i] + grid[1][j][i] + grid[2][j][i] == 9)
			{
				player += 1;
			}
			else if (grid[0][j][i] + grid[1][j][i] + grid[2][j][i] == 12)
			{
				computer += 1;
			}
		}
		
		for(int k = 0; k < 3; k++) 
		{
        	if (grid[k][0][i] + grid[k][1][i] + grid[k][2][i] == 9) 
			{
        		player += 1;
        	} 
			else if (grid[k][0][i] + grid[k][1][i] + grid[k][2][i] == 12) 
			{
        		computer += 1;
        	}
        }
    
        if (grid[0][0][i] + grid[1][1][i] + grid[2][2][i] == 9) 
		{
        	player += 1;
        } 
		else if (grid[0][0][i] + grid[1][1][i] + grid[2][2][i] == 12) 
		{
        	computer += 1;
        }
    
        if (grid[0][2][i] + grid[1][1][i] + grid[2][0][i] == 9) 
		{
        	player += 1;
        } 
		else if (grid[0][2][i] + grid[1][1][i] + grid[2][0][i] == 12) 
		{
        	computer += 1;
        }
        
        if (grid[i][0][0] + grid[i][1][1] + grid[i][2][2] == 9)
		{ 
           player += 1;
        }
		else if (grid[i][0][0] + grid[i][1][1] + grid[i][2][2] == 12)
		{
           computer += 1;
        }
        
        if (grid[i][2][0] + grid[i][1][1] + grid[i][0][2] == 9)
		{
		 player += 1;
        } 
		else if (grid[i][2][0] + grid[i][1][1] + grid[i][0][2] == 12)
		{
           computer += 1;
        }
    
        if (grid[0][i][0] + grid[1][i][1] + grid[2][i][2] == 9)
		{ 
           player += 1;
    	} 
		else if (grid[0][i][0] + grid[1][i][1] + grid[2][i][2] == 12)
		{
           computer += 1;
        }
        
        if (grid[2][i][0] + grid[1][i][1] + grid[0][i][2] == 9)
		{ 
           player += 1;
        } 
		else if (grid[2][i][0] + grid[1][i][1] + grid[0][i][2] == 12)
		{
           computer += 1;
        }
		
		
	}
	
	for (int l = 0; l < 9; l++) 
	{
          if (grid[l/3][l%3][0] + grid[l/3][l%3][1] + grid[l/3][l%3][2] == 9) 
		  {
              player += 1;
          } 
		  else if (grid[l/3][l%3][0] + grid[l/3][l%3][1] + grid[l/3][l%3][2] == 12) 
		  {
               computer += 1;
          }
    }
        
     
    if (grid[0][0][0] + grid[1][1][1] + grid[2][2][2] == 9) 
	{
       player += 1;
    } 
	else if (grid[0][0][0] + grid[1][1][1] + grid[2][2][2] == 12) 
	{
       computer += 1;
    }
    
    if (grid[2][2][0] + grid[1][1][1] + grid[0][0][2] == 9) 
	{
       player += 1;
    } 
	else if (grid[2][2][0] + grid[1][1][1] + grid[0][0][2] == 12) 
	{
       computer += 1;
    }   
    
    if (grid[2][0][0] + grid[1][1][1] + grid[0][2][2] == 9) 
	{
       player += 1;
    } 
	else if (grid[2][0][0] + grid[1][1][1] + grid[0][2][2] == 12) 
	{
       computer += 1;
    }   
    
    if (grid[0][2][0] + grid[1][1][1] + grid[2][0][2] == 9) 
	{
       player += 1;
    } 
	else if (grid[0][2][0] + grid[1][1][1] + grid[2][0][2] == 12) 
	{
       computer += 1;
    }   
    
    points[0] = player;
    points[1] = computer;
}

bool Board::isOver()
{
	bool over = true;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (grid[i][j][k] == 0)
				{
					over = false;
				}
			}
		}
	}
	
	return over;
	
}

void Board::makeMove()
{
	bool draw = false;
	
	if (first == 0)
	{
		while (!draw)
		{
			checkWinner();
			
			cout << "Player: " << points[0] << endl;
			cout << "CPU: " << points[1] << endl;
			
			playerMove();
			printGrid();
			
			draw = isOver();
			
			if (!isOver())
			{
				checkWinner();
				
				cout << "Player: " << points[0] << endl;
				cout << "CPU: " << points [1] << endl;
				
				computerMove();
				printGrid();
				draw = isOver();
				checkWinner();
				
				cout << "Player: " << points[0] << endl;
				cout << "CPU: " << points[1] << endl;
			}
		}
	}
	
	else
	{
		while (!draw)
		{
			checkWinner();
			
			cout << "Player: " << points[0] << endl;
			cout << "CPU: " << points[1] << endl;
			
			computerMove();
			printGrid();
			draw = isOver();
			
			if (!isOver())
			{
				checkWinner();
				
				cout << "Player: " << points[0] << endl;
				cout << "CPU: " << points[1] << endl;
				
				playerMove();
				printGrid();
				draw = isOver();
				checkWinner();
				
				cout << "Player: " << points[0] << endl;
				cout << "CPU: " << points[1] << endl;
			}
		}
	}
	
}


void Board::computerMove()
{
	int row, col, brd;
	row = rand()%3;
	col = rand()%3;
	brd = rand()%3;
	
	if (isValid(col, row, brd))
	{
		setCell(col, row, brd, 4);
	}
	else
	{
		computerMove();
	}
}

void Board::playerMove()
{
	int row, col, brd;
	
	cout << "Column 0, 1, or 2?";
	cin >> col;
	cout << "Row 0, 1, or 2?";
	cin >> row;
	cout << "Board 0, 1, or 2?";
	cin >> brd;
	
	if (isValid(col, row, brd))
	{
		setCell(col, row, brd, 3);
	}
	else
	{
		error(col, row, brd);
		printGrid();
		playerMove();
	}
}

main()
{
	Board board1;
	board1.welcome();
	board1.goesFirst();
	board1.printGrid();
	board1.makeMove();
	board1.getWinner();
}
