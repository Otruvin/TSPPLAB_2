#pragma once
#include <vector>
#include "Room.h"

class Flat
{

private:
	int countRooms;
	vector<Room> rooms;

public:
	Flat(vector<Room> rooms);
	int getCountRooms();
	vector<Room> getAllRooms();
	float getSAllGlass();
	float getV();
	float getCountParquet();
	float getSAllPaint();
	~Flat();
};

