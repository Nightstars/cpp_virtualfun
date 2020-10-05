#pragma once
#include "Shape.h"
class Rect : public Shape
{
public:
	Rect(double width,double heibht);
	~Rect();
	virtual double calcArea();
private:
	double m_dWdith;
	double m_dHeight;
};

