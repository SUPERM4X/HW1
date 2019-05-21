#include "Rectangle.h"
int Rectangle::numOfRect = 0;
Rectangle::Rectangle()
{
	numOfRect++;
}
Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
	numOfRect++;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getArea() const
{
	return width * height;
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}