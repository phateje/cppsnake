#pragma once
#include <vector>
class Board
{
public:
	Board();
	Board(const int width, const int height, char wall);
	~Board();

	void printBoard();

private:
	const int width;
	const int height;
	std::vector< std::vector<char> > theBoard;


	char wall;
};

