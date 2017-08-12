#include "stdafx.h"
#include "Board.h"
#include <iostream>
using namespace std;


Board::Board() : width(30), height(15)
{
	this->wall = '#';
	vector< vector<char>> tempB(30, vector<char>(15, ' '));
	this->theBoard = tempB;
}

Board::Board(const int _width, const int _height, char wall)
	: width(_width), height(_height)
{
	this->wall = wall;
	vector< vector<char>> tempB(width, vector<char>(height, ' '));
	this->theBoard = tempB;
}

Board::~Board()
{
}

void Board::printBoard()
{
	system("cls");

	int count, rowCount = 0;

	for (int row = 0; row < height; row++) {
		if (row == 0 || row == height - 1) {
			for (int col = 0; col < width; col++) {
				this->theBoard[col][row] = wall;
			}
		}
		else {
			this->theBoard[0][row] = wall;
			this->theBoard[width-1][row] = wall;
		}
	}

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			cout << this->theBoard[col][row];
		}
		cout << endl;
	}

#if 0
	int count = 0;
	int rowCount = 0;
	if (width > 0 && height > 0) {
		while (rowCount < height) {
			if (rowCount == 0 || rowCount == height - 1) {
				cout << "\033[1;31m"; // color red
				while (count < width) {
					cout << wall;
					count++;
				}
				cout << "\033[1;37m"; // color white
				cout << endl;
				count = 0;
			}
			else {
				while (count < width) {
					count > 0 && count < width - 1 ? cout << " " : cout << wall;
					count++;
				}
				cout << endl;
				count = 0;
			}
			rowCount++;
		}
	}
#endif // 0

}
