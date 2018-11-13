#pragma once
class Parquet
{

private:
	float length;
	float width;

public:
	Parquet(float width, float length);
	void setWidth(float width);
	void setLength(float length);
	float getLength();
	float getWidth();
	float getS();
	~Parquet();
};

