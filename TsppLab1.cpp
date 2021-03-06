
#include "pch.h"
#include "Window.h"
#include "Parquet.h"
#include "Room.h"
#include "Flat.h"
#include "House.h"
#include "Street.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	Window window1(5, 14);
	Window window2(4, 12);
	Parquet parquet1(2, 8);
	Parquet parquet2(3, 5);
	Room room1(25.3, 34.2, 45.1, "red", 32.2, 3, window1, parquet1);
	Room room2(30.2, 20.0, 50.9, "green", 23.8, 2, window2, parquet2);
	Room room3(45.2, 25.0, 63.9, "white", 11.3, 2, window2, parquet2);
	Room room4(45.2, 25.0, 63.9, "green", 11.3, 4, window2, parquet1);
	Room room5(45.2, 25.0, 23.9, "white", 11.3, 2, window1, parquet2);
	vector<Room> rooms1;
	vector<Room> rooms2;
	vector<Room> rooms3;
	rooms1.push_back(room1);
	rooms1.push_back(room2);
	rooms2.push_back(room3);
	rooms2.push_back(room4);
	rooms3.push_back(room5);
	Flat flat1(rooms1);
	Flat flat2(rooms2);
	Flat flat3(rooms3);
	vector<Flat> flats1;
	vector<Flat> flats2;
	flats1.push_back(flat1);
	flats1.push_back(flat2);
	flats2.push_back(flat3);
	House house1(2, 2, flats1);
	House house2(1, 3, flats2);
	vector<House> houses;
	houses.push_back(house1);
	houses.push_back(house2);
	Street street(houses);

	cout << "Street1: CountParquet: " << street.getCountOfParquet() << "\nS all glass: " << street.getAllGlassS() << "\n S all paint: "
		<< street.getVAllPaint() << "\n V room: " << street.getAllHousesV() << endl;

}
