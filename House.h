#pragma once
#include "Flat.h"
#include <vector>

class House
{

private:
	int countFloors;
	int countFlatsOnFloor;
	vector<Flat> flats;

public:
	House(int countFloors, int countFlatsOnFloor, vector<Flat> flats);
	int getCountFloors();
	int getCountFlatsOnFloor();
	vector<Flat> getFlats();
	void setCountFloors(int countFlors);
	float getV();
	float getSAllGlass();
	float getCountParquet();
	float getSAllPaint();
	~House();
};

