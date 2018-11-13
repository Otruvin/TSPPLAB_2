#include "pch.h"
#include "Street.h"

Street::~Street()
{
}



float Street::getV()
{
	float sumAllHouseV = 0;
	for (House house : this->houses)
	{
		sumAllHouseV += house.getV();
	}
	return sumAllHouseV;
}

float Street::getSAllGlS()
{
	float sumSAllGlass = 0;
	for (House house : this->houses)
	{
		sumSAllGlass += house.getSAllGlass();
	}
	return sumSAllGlass;
}

float Street::getCountParquet()
{
	float sumAllParquet = 0;
	for (House house : this->houses)
	{
		sumAllParquet += house.getCountParquet();
	}
	return sumAllParquet;
}

float Street::getPaint()
{
	float sumSAllpaint = 0;
	for (House house : this->houses)
	{
		sumSAllpaint += house.getSAllPaint();
	}
	return sumSAllpaint;
}

Street::Street(vector<House> houses)
{
	this->houses = houses;
	this->allHousesV = this->getV();
	this->allGlassS = this->getSAllGlS();
	this->countOfParquet = this->getCountParquet();
	this->vPaint = this->getPaint();
}

vector<House> Street::getHouses()
{
	return this->houses;
}

float Street::getAllHousesV()
{
	return this->allHousesV;
}

float Street::getAllGlassS()
{
	return this->allGlassS;
}

float Street::getCountOfParquet()
{
	return this->countOfParquet;
}

float Street::getVAllPaint()
{
	return this->vPaint;
}
