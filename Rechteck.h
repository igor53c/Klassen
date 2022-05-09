#pragma once

#include "Punkt.h"

class Rechteck
{
public:
	Rechteck(int, int, int, int);

	int  getX() const;
	int  getY() const;
	void setX(int);
	void setY(int);

	int  getBreite() const;
	int  getHoehe() const;
	int  getFlaeche() const;

private:
	Punkt p0;
	Punkt p1;

};

