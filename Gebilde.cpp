#include "Gebilde.h"

Gebilde::Gebilde(int x, int y, int breite, int hoehe, Farbe* farbe)
{
	pRect = new Rechteck(x, y, breite, hoehe);

	pColor = farbe;
}

Gebilde::~Gebilde()
{
	delete pRect;
}

Farbe* Gebilde::getFarbe() const
{
	return pColor;
}

Rechteck* Gebilde::getRechteck() const
{
	return pRect;
}
