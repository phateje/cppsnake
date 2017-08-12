#pragma once
class Board
{
public:
	Board();
	Board(int width, int height, char wall);
	~Board();

private:
	int width;
	int height;
	char wall;
};

