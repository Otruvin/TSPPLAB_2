#include "pch.h"
#include "Flat.h"


Flat::~Flat()
{
}

Flat::Flat(vector<Room> rooms)
{
	this->countRooms = rooms.size();
	this->rooms = rooms;
}

int Flat::getCountRooms()
{
	return this->countRooms;
}

vector<Room> Flat::getAllRooms()
{
	return this->rooms;
}

float Flat::getSAllGlass()
{
	float sumAllRoomGlass = 0;
	for (Room room : this->rooms)
	{
		sumAllRoomGlass += room.getSAllGlass();
	}
	return sumAllRoomGlass;
}

float Flat::getV()
{
	float sumAllRoomV = 0;
	for (Room room : this->rooms)
	{
		sumAllRoomV += room.getV();
	}
	return sumAllRoomV;
}

float Flat::getCountParquet()
{
	float countAllParquet = 0;
	for (Room room : this->rooms)
	{
		countAllParquet += room.getCountParquet();
	}
	return countAllParquet;
}

float Flat::getSAllPaint()
{
	float sumSAllPaint = 0;
	for (Room room : this->rooms)
	{
		sumSAllPaint += room.getSAllPaint();
	}
	return sumSAllPaint;
}
