#include "pch.h"
#include "Window.h"


Window::Window(float height, float width)
{
	this->height = height;
	this->width = width;
}

void Window::setWidth(float width)
{
	this->width = width;
}

void Window::setHeight(float height)
{
	this->height = height;
}

float Window::getHeight()
{
	return this->height;
}

float Window::getWidth()
{
	return this->width;
}

float Window::getS()
{
	return this->height * this->width;
}


Window::~Window()
{
}
