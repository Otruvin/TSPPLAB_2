#include "pch.h"
#include "Parquet.h"


Parquet::Parquet(float width, float length)
{
	this->length = length;
	this->width = width;
}

void Parquet::setWidth(float width)
{
	this->width = width;
}

void Parquet::setLength(float length)
{
	this->length = length;
}

float Parquet::getLength()
{
	return this->length;
}

float Parquet::getWidth()
{
	return this->width;
}

float Parquet::getS()
{
	return this->length * this->width;
}

Parquet::~Parquet()
{
}
