#include "stdafx.h"
#include "Board.h"


Board::Board()
{
}

Board::Board(int width, int height, char wall)
{
	this->width = width;
	this->height = height;
	this->wall = wall;
}

Board::~Board()
{
}
