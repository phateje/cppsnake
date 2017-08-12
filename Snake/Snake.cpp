// Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Board.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!";
	Board *board = new Board(50, 20, '#');
	Board bd = *board;

	board->printBoard();
	char a;
	cin >> a;
	bd.printBoard();
	
	cin >> a;
	board->printBoard();
	
	cin >> a;
    return 0;
}

