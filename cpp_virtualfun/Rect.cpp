#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect(double width, double heibht)
{
	cout << "Rect()" << endl;
	m_dWdith = width;
	m_dHeight = heibht;
}

Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::calcArea()
{
	cout << "Rect->calcArea()" << endl;
	return m_dWdith * m_dHeight;
}
