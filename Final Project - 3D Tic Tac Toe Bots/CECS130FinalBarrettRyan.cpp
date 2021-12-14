// Program: Tic-Tac-Toe 3D Bots
// Description: The program displays a 3D tic-tac-toe board and has two bots play each other using classes and inherited traits.
// Authors: Stone Barrett & Brandon Ryan
// Emails: scbarr04@louisville.edu, brandon.ryan.1@louisville.edu
// Date: 4/24/19

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>


using namespace std;
using std::string;
       
class Game 
{
      protected:
              int winner;
              int winsStone;
              int winsBrandon;  
      public:
             void welcome();
};

void Game::welcome() 
{
     cout << "3D Tic-Tac-Toe" << endl;
     cout << "Watch the two CPU, named of their creators, Tic, Tac, and Toe through three dimensions!" << endl;
}

class Brandon
{
	public:
		void BrandonMove();
};

class Stone
{
	public:
		void StoneMove();
};

class Competition: public Game, public Brandon, public Stone
{
      private:
             int grid[3][3][3];
             int first;
             int points[1];
             int brandon;
             int stone;
              
      public:
             Competition();
             
             void setCell(int x, int y, int z, int value);
             void getWinner();
             int setWinner(int value);
             int GetStonewins();
             int GetBrandonwins();
             void reset();
             
             void BrandonMove();
		     void StoneMove();
		     void makeMove();
             
             void printGrid();
             bool isValid(int x, int y, int z);
             void checkWinner();
             bool isOver();
             void goesFirst();
};
     
Competition::Competition() 
{
	setWinner(0);
    	for (int i = 0; i < 9; i++) 
	  		{
            	setCell((i / 3), (i % 3), 0, 0);
                setCell((i / 3), (i % 3), 1, 0);
                setCell((i / 3), (i % 3), 2, 0);
            }
    winsStone = 0;
    winsBrandon = 0;
    points[0] = 0;
    points[1] = 0;
    brandon = 0;
    stone = 0;
}

void Competition::reset() 
{
	for (int i = 0; i < 9; i++) 
		{
        	setCell((i / 3), (i % 3), 0, 0);
            setCell((i / 3), (i % 3), 1, 0);
            setCell((i / 3), (i % 3), 2, 0);
        }
    points[0] = 0;
    points[1] = 0;
	brandon = 0;
    stone = 0;
}

void Competition::goesFirst() 
{
	srand(time(NULL));
	first = (rand()%100)>49?0:1;
	if (first == 0) 
	{
    	cout << "Stone has the first move!\n" << endl;
    }
	else 
	{
		cout << "Brandon has the first move!\n" << endl;
    }
}

void Competition::getWinner() 
{
	cout << "Final Score" << endl;
    cout << "Stone: " << points[0] << endl;
    cout << "Brandon: " << points[1] << endl;
    if (points[0] > points[1]) 
	{
    	winsStone = winsStone + 1;
        cout << "Stone is the victor!" << endl;
    } 
	else if (points[1] > points[0]) 
	{
        winsBrandon = winsBrandon + 1;
        cout << "Brandon is the victor!" << endl;
    } 
	else if (points[0] == points[1]) 
	{
        cout << "It's a draw this time..." << endl;
    }   
}

int Competition::GetStonewins() 
{
	return winsStone;
}

int Competition::GetBrandonwins() 
{
	return winsBrandon;
}

int Competition::setWinner(int value) 
{
	Game::winner = value;
}

void Competition::setCell(int x, int y, int z, int value) 
{
	grid[x][y][z] = value;
}

bool Competition::isValid(int x, int y, int z) 
{
	return (((x > -1) && (x < 3)) && ((y > -1) && (y < 3) && ((z > -1) && (z < 3))) && !(grid[x][y][z]));
}
     
string dispChar(int num) 
{
	string c = "";
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
     
void Competition::printGrid() 
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

void Competition::checkWinner() 
{
	points[0] = 0;
    points[1] = 0;
    brandon = 0;
    stone = 0;
    for (int i = 0; i < 3; i++) 
	{       
    	for (int j = 0; j < 3; j++) 
		{
        	if (grid[0][j][i] + grid[1][j][i] + grid[2][j][i] == 9) 
			{
        		stone += 1;
        	} 
			else if (grid[0][j][i] + grid[1][j][i] + grid[2][j][i] == 12) 
			{
        		brandon += 1;
        	}
        }
    
        for (int k = 0; k < 3; k++) 
		{
        	if (grid[k][0][i] + grid[k][1][i] + grid[k][2][i] == 9) 
			{
        		stone += 1;
        	} 
			else if (grid[k][0][i] + grid[k][1][i] + grid[k][2][i] == 12) 
			{
        		brandon += 1;
        	}
        }
    
        if (grid[0][0][i] + grid[1][1][i] + grid[2][2][i] == 9) 
		{
        	stone += 1;
        } 
		else if (grid[0][0][i] + grid[1][1][i] + grid[2][2][i] == 12) 
		{
        	brandon += 1;
        }
    
        if (grid[0][2][i] + grid[1][1][i] + grid[2][0][i] == 9) 
		{
        	stone += 1;
        } 
		else if (grid[0][2][i] + grid[1][1][i] + grid[2][0][i] == 12) 
		{
        	brandon += 1;
        }
        
        if (grid[i][0][0] + grid[i][1][1] + grid[i][2][2] == 9)
		{ 
           stone += 1;
        } 
		else if (grid[i][0][0] + grid[i][1][1] + grid[i][2][2] == 12)
		{
           brandon += 1;
        }
        
        if (grid[i][2][0] + grid[i][1][1] + grid[i][0][2] == 9)
		{ 
           stone += 1;
        } 
		else if (grid[i][2][0] + grid[i][1][1] + grid[i][0][2] == 12)
		{
        	brandon += 1;
        }
    
        if (grid[0][i][0] + grid[1][i][1] + grid[2][i][2] == 9)
		{ 
           stone += 1;
        } 
		else if (grid[0][i][0] + grid[1][i][1] + grid[2][i][2] == 12)
		{
           brandon += 1;
        }
        
        if (grid[2][i][0] + grid[1][i][1] + grid[0][i][2] == 9)
		{ 
           stone += 1;
        } 
		else if (grid[2][i][0] + grid[1][i][1] + grid[0][i][2] == 12)
		{
           brandon += 1;
        }
    }
    
    for (int l = 0; l < 9; l++) 
	{
    	if (grid[l/3][l%3][0] + grid[l/3][l%3][1] + grid[l/3][l%3][2] == 9) 
		{
    		stone += 1;
        } 
		else if (grid[l/3][l%3][0] + grid[l/3][l%3][1] + grid[l/3][l%3][2] == 12) 
		{
        	brandon += 1;
        }
    }
        
    if (grid[0][0][0] + grid[1][1][1] + grid[2][2][2] == 9) 
	{
       stone += 1;
    } 
	else if (grid[0][0][0] + grid[1][1][1] + grid[2][2][2] == 12) 
	{
       brandon += 1;
    }
    
    if (grid[2][2][0] + grid[1][1][1] + grid[0][0][2] == 9) 
	{
    	stone += 1;
    } 
	else if (grid[2][2][0] + grid[1][1][1] + grid[0][0][2] == 12) 
	{
    	brandon += 1;
    }   
    
    if (grid[2][0][0] + grid[1][1][1] + grid[0][2][2] == 9) 
	{
    	stone += 1;
    } 
	else if (grid[2][0][0] + grid[1][1][1] + grid[0][2][2] == 12) 
	{
    	brandon += 1;
    }   
    
    if (grid[0][2][0] + grid[1][1][1] + grid[2][0][2] == 9) 
	{
    	stone += 1;
    } 
	else if (grid[0][2][0] + grid[1][1][1] + grid[2][0][2] == 12) 
	{
       brandon += 1;
    }   
    
    points[0] = stone;
    points[1] = brandon;

}

bool Competition::isOver() 
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
                


void Competition::makeMove() 
{
	bool draw = false;
    if (first == 0) 
	{
    	while (!draw) 
		{
        	checkWinner();
            StoneMove();
            draw = isOver();
            if (!isOver()) 
			{
            	checkWinner();
            	BrandonMove();
            	draw = isOver();
            	checkWinner();
            }
    	}
    } 
	else 
	{
    	while (!draw) 
		{
        	checkWinner();
            BrandonMove();
            draw = isOver();
            if (!isOver()) 
			{
            	checkWinner();
                StoneMove();
                draw = isOver();
                checkWinner();
            }
        }
    }
}

void Competition::BrandonMove() 
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
        BrandonMove();
    }
}

void Competition::StoneMove() 
{
	int row, col, brd;
    row = rand()%3;
    col = rand()%3;
    brd = rand()%3;
    if (isValid(col, row, brd)) 
	{
    	setCell(col, row, brd, 3);
    } 
	else 
	{
        StoneMove();
    }
}


main() 
{
	Competition competition1;
    competition1.welcome();
    for (int i = 1; i <= 10; i++ ) 
	{
    	cout << "Game " << i << endl;
        competition1.goesFirst();
        competition1.makeMove();
        competition1.printGrid();
        competition1.getWinner();
        system("pause");
        competition1.reset();
    }
	cout << "\n\n\n\nFinal Win Count" << endl;
    cout << "Stone: " << competition1.GetStonewins() << endl;
    cout << "Brandon: " << competition1.GetBrandonwins() << endl;
    system("pause");
}
