// Program: Tic-Tac-Toe
// Description: The program displays a tic-tac-toe board and plays a match against the user.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 3/29/19

#include <iostream>
#include <string>

using std::string;

enum SquareState {blank = ' ', X = 'X', O = 'O'};

class Board
{
	private:
		const int WIDTH;
		const int HEIGHT;
		int* board;
	
	public:
		Board() : WIDTH(3), HEIGHT(3)
		{
			board = new int[9];
			
			for (int loopVal = 0; loopVal < 9; loopVal++)
				*(board + loopVal) = blank;
		}
		
	~Board() {delete[] board;}
	void setX(int y, int x);
	void setO(int y, int x);
	bool used(int y, int x);
	SquareState isLine();
	void draw();
};

class Game
{
	public:
		Board* doInput(string player, Board* gb);
		bool inRange(int test);
		Board* bot();
};

void Board::setX(int y, int x)
{
	*(board + y*HEIGHT + x) = X;
}

void Board::setO(int y, int x)
{
	*(board + y*HEIGHT + x) = O;
}

bool Board::used(int y, int x)
{
	return *(board + y*HEIGHT + x) != ' ';
}

Board* Game::bot()
{
	if (Board[2] != 'X' && Board[2] != 'O')
    {
        bOard[2] = bot;
    }
    else if (board[0] != 'X' && board[0] != 'O')
    {
    	board[0] = bot;
    }
	    else if (board[1] != 'X' && board[1] != 'O')
    {
        board[1] = bot;
    }
    	else if (board[3] != 'X' && board[3] != 'O')
    {
        board[3] = bot;
    }
    	else if (board[4] != 'X' && board[4] != 'O')
    {
        board[4] = bot;
    }
        else if (board[5] != 'X' && board[5] != 'O')
    {
        board[1] = bot;
    }
        else if (board[0] != 'X' && board[6] != 'O')
    {
        board[0] = bot;
    }
        else if (board[2] != 'X' && board[2] != 'O')
    {
        board[2] = bot;
    }
        else if (board[1] != 'X' && board[1] != 'O')
    {
        board[1] = bot;
    }

}

SquareState Board::isLine()
{
	if (*board == X && *(board + 1) == X && *(board + 2) == X)
		return X;
	if (*board == O && *(board + 1) == O && *(board + 2) == O)
		return O;
	if (*(board + 3) == X && *(board + 4) == X && *(board + 5) == X)
		return X;
	if (*(board + 3) == O && *(board + 4) == O && *(board + 5) == O)
		return O;
	if (*(board + 6) == X && *(board + 7) == X && *(board + 8) == X)
		return X;
	if (*(board + 6) == O && *(board + 7) == O && *(board + 8) == O)
		return O;
	if (*board == X && *(board + 3) == X && *(board + 6) == X)
		return X;
	if (*board == O && *(board + 3) == O && *(board + 6) == O)
		return O;
	if (*(board + 1) == X && *(board + 4) == X && *(board + 7) == X)
		return X;
	if (*(board + 1) == O && *(board + 4) == O && *(board + 7) == O)
		return O;
	if (*(board + 2) == X && *(board + 5) == X && *(board + 8) == X)
		return X;
	if (*(board + 2) == O && *(board + 5) == O && *(board + 8) == O)
		return O;
	if (*board == X && *(board + 4) == X && *(board + 8) == X)
		return X;
	if (*board == O && *(board + 4) == O && *(board + 8) == O)
		return O;
	if (*(board + 2) == X && *(board + 4) == X && *(board + 6) == X)
		return X;
	if (*(board + 2) == O && *(board + 4) == O && *(board + 6) == O)
		return O;
	
	return blank;
}

void Board::draw()
{
	using std::cout;
	
	cout << "\n";
	
	for (int loopVal = 0; loopVal < HEIGHT; loopVal++)
	{
		cout << (char)*(board + loopVal*HEIGHT);
		
		for (int loopValx = 1; loopValx < WIDTH; loopValx++)
		{
			cout << " | " << (char)*(board + loopVal*WIDTH + loopValx);
		}
		cout << "\n" << "------" << "\n";
	}
}

Board* Game::doInput(string player, Board* gb)
{
	using std::cout;
	using std::cin;
	
	gb->draw();
	string letter;
	
	if (player.compare("one") == 0)
	{
		letter = "X";
	}
	else if (player.compare("bot") == 0)
	{
		letter = "O";
	}
	else return gb;
	
	int input1, input2;
	
	do
	{
		do
		{
			cout << "\nPlayer " << player.c_str()
				<< ", please enter a row  number to put an "
				<< letter.c_str() << ": ";
			cin >> input1;
		}
		while (!inRange(input1));
		
		do
		{
			cout << "\nPlease enter a column number to put an "
				<< letter.c_str() << ": ";
			cin >> input2;
		}
		while (!inRange(input2));
	}
	while (gb->used(input1,input2));
	
	if (player.compare("one") == 0)
	{
		gb->setX(input1, input2);
	}
	else
	{
		gb->setO(input1, input2);
	}
	
	return gb;
}

bool Game::inRange(int test)
{
	return test > -1 && test < 3;
}

int main(void)
{
	using std::cout;
	using std::cin;
	
	Board* gb = new Board;
	Game g;
	string player1, player2;
	
	cout << "Tic Tac Toe"
		<< "\nPlease enter your name: ";
	cin >> player1;
	
	while (gb->isLine() == ' ')
	{
		gb = g.doInput("one",gb);
		//gb = g.doInput("two",gb);
		gb = g.bot();
	}
	
	gb->draw();
	
	if (gb->isLine() == X)
	{
		cout << player1, " you win!";
	}
	else
	{
		cout << player1, " you lose!";
	}
	
	return 0;
}
