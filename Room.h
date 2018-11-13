#pragma once
#include <string>
#include "Window.h"
#include "Parquet.h"
using namespace std;

class Room
{

private:
	float length;
	float height;
	float width;
	string color;
	float quantityLiters;
	int nWindows;
	float sOneWindow;
	float sOneParquet;

public:
	Room(float length, float height, float width, string color,
		float quantityLiters, int nWindows, Window window, Parquet parquet);
	void setLength(float length);
	void setHeight(float height);
	void setWidth(float width);
	void setColor(string color);
	void setQuantityLiters(float quantityLiters);
	void setNWindows(int nWindows);
	float getLength();
	float getHeight();
	float getWidth();
	string getColor();
	float getQuantityLiters();
	int getNWindows();
	float getV();
	float getSAllGlass();
	float getCountParquet();
	float getSAllPaint();
	
	~Room();
};

