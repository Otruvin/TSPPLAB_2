#include "pch.h"
#include "House.h"
#include <iostream>
using namespace std;


House::~House()
{
}

House::House(int countFloors, int countFlatsOnFloor, vector<Flat> flats)
{
	this->countFlatsOnFloor = countFlatsOnFloor;
	this->countFloors = countFloors;
	if (this->flats.size() <= this->countFlatsOnFloor * this->countFloors)
	{
		this->flats = flats;
	}
}

int House::getCountFloors()
{
	return this->countFloors;
}

int House::getCountFlatsOnFloor()
{
	return this->countFlatsOnFloor;
}

vector<Flat> House::getFlats()
{
	if (this->flats.empty())
	{
		cout << "Квартииры не заданы, или количество квартир превышает допустимое значение \n";
		return vector<Flat>();
	}
	return this->flats;
}

void House::setCountFloors(int countFlors)
{
	this->countFloors = countFloors;
}

float House::getV()
{
	float sumAllFlatV = 0;
	for (Flat flat : this->flats)
	{
		sumAllFlatV += flat.getV();
	}
	return sumAllFlatV;
}

float House::getSAllGlass()
{
	float sumAllGlass = 0;
	for (Flat flat : this->flats)
	{
		sumAllGlass += flat.getSAllGlass();
	}
	return sumAllGlass;
}

float House::getCountParquet()
{
	float countAllParquet = 0;
	for (Flat flat : this->flats)
	{
		countAllParquet += flat.getCountParquet();
	}
	return countAllParquet;
}

float House::getSAllPaint()
{
	float sumSAllPaint = 0;
	for (Flat flat : this->flats)
	{
		sumSAllPaint += flat.getSAllPaint();
	}
	return sumSAllPaint;
}
