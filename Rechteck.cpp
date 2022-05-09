#include "Rechteck.h"

Rechteck::Rechteck(int x, int y, int breite, int hoehe)
{
	p0.x = x;
	p0.y = y;

	p1.x = x + breite;
	p1.y = y + hoehe;
}

int Rechteck::getX() const
{
	return p0.x;
}

int Rechteck::getY() const
{
	return p0.y;
}

void Rechteck::setX(int value)
{
	int b = getBreite();

	p0.x = value;
	p1.x = b + p0.x;
}

void Rechteck::setY(int value)
{
	int h = getHoehe();

	p0.y = value;
	p1.y = h + p0.y;
}

int Rechteck::getBreite() const
{
	return p1.x - p0.x;
}

int Rechteck::getHoehe() const
{
	return p1.y - p0.y;
}

int Rechteck::getFlaeche() const
{
	return getBreite() * getHoehe();
}
