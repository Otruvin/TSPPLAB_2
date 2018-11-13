#pragma once
class Window
{

private:
	float height;
	float width;

public:
	Window(float height, float width);
	void setWidth(float width);
	void setHeight(float height);
	float getHeight();
	float getWidth();
	float getS();
	~Window();
};

