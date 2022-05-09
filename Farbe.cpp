#include "Farbe.h"

Farbe::Farbe()
{
	rot = gruen = blau = 0;   // Schwarz
}

Farbe::Farbe(int rot, int gruen, int blau)
{
	this->rot = rot;
	this->gruen = gruen;
	this->blau = blau;
}
