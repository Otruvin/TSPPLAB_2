#pragma once
#include "House.h"
#include <vector>
class Street
{

private:
	vector<House> houses;
	float allHousesV;
	float allGlassS;
	float countOfParquet;
	float vPaint;
	float getV();
	float getSAllGlS();
	float getCountParquet();
	float getPaint();

public:
	Street(vector<House> houses);
	vector<House> getHouses();
	float getAllHousesV();
	float getAllGlassS();
	float getCountOfParquet();
	float getVAllPaint();
	~Street();
};

