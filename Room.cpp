#include "pch.h"
#include "Room.h"


Room::~Room()
{
}

Room::Room(float length, float height, float width, string color, 
	float quantityLiters, int nWindows, Window window, Parquet parquet)
{
	this->color = color;
	this->height = height;
	this->length = length;
	this->quantityLiters = quantityLiters;
	this->width = width;
	this->nWindows = nWindows;
	this->sOneWindow = window.getS();
	this->sOneParquet = parquet.getS();

}

void Room::setLength(float length)
{
	this->length = length;
}

void Room::setHeight(float height)
{
	this->height = height;
}

void Room::setWidth(float width)
{
}

void Room::setColor(string color)
{
	this->color = color;
}

void Room::setQuantityLiters(float quantityLiters)
{
	this->quantityLiters = quantityLiters;
}

void Room::setNWindows(int nWindows)
{
	this->nWindows = nWindows;
}

float Room::getLength()
{
	return this->length;
}

float Room::getHeight()
{
	return this->height;
}

float Room::getWidth()
{
	return this->width;
}

string Room::getColor()
{
	return this->color;
}

float Room::getQuantityLiters()
{
	return this->quantityLiters;
}

int Room::getNWindows()
{
	return this->nWindows;
}

float Room::getV()
{
	return this->height * this->length * this->width;
}

float Room::getSAllGlass()
{
	return this->nWindows * this->sOneWindow;
}

float Room::getCountParquet()
{
	return (this->width * this->length) / this->sOneParquet;
}

float Room::getSAllPaint()
{
	return ((this->length * this->height) * 2) + ((this->width * this->height) * 2);
}
