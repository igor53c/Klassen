#pragma once
#include "Farbe.h"
#include "Rechteck.h"

class Gebilde
{
public:
	Gebilde(int, int, int, int, Farbe*);
	~Gebilde();

	Farbe* getFarbe() const;
	Rechteck* getRechteck() const;

private:
	Rechteck* pRect;
	Farbe* pColor;
};

