// Klassen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MeineKlasse.h"
#include "Tag.h"
#include "Punkt.h"
#include "Rechteck.h"
#include "Farbe.h"
#include "Gebilde.h"

using namespace std;

void verwendeMeineKlasse();

void autoPointer();

int main()
{
	locale::global(locale("German_germany"));

	MeineKlasse mk;

	cout << "Meineklasse.a: " << mk.a << endl;

	{
		MeineKlasse mk1;

		mk1.a = 99;

		cout << "mk1.a: " << mk1.a << endl;
	}

	auto* pMK = new MeineKlasse();

	pMK->a = 12;

	cout << "pMK->a: " << pMK->a << endl;

	delete pMK;

	Tag tag1;

	cout << "tag1.getTag(): " << tag1.getTag() << endl;

	tag1.setTag(99);

	cout << "tag1.getTag(): " << tag1.getTag() << endl;

	Tag tag2 = Tag();

	cout << "tag2.getTag(): " << tag2.getTag() << endl;

	Tag tag3 = Tag(99);

	cout << "tag3.getTag(): " << tag3.getTag() << endl;

	Tag tag4 = Tag{ 6 };

	cout << "tag4.getTag(): " << tag4.getTag() << endl;

	Tag tag5 = 15;

	cout << "tag5.getTag(): " << tag5.getTag() << endl;

	Tag tag6 = Tag(tag5);

	cout << "tag6.getTag(): " << tag6.getTag() << endl;

	Tag tag7 = tag4;

	cout << "tag7.getTag(): " << tag7.getTag() << endl;

	Tag::setDefaultTag(15);

	cout << "Tag::getDefaultTag(): " << Tag::getDefaultTag() << endl;

	Tag tag8;

	cout << "tag8.getTag(): " << tag8.getTag() << endl;

	tag8.setDefaultTag(1);

	Tag tag9;

	cout << "tag9.getTag(): " << tag9.getTag() << endl;

	Punkt p1(4, 8);

	cout << "Punkt(" << p1.x << ", " << p1.y << ")" << endl;

	auto* pRect = new Rechteck(2, 4, 100, 200);

	cout << "pRect->getX()      : " << pRect->getX() << endl;
	cout << "pRect->getY()      : " << pRect->getY() << endl;
	cout << "pRect->getBreite() : " << pRect->getBreite() << endl;
	cout << "pRect->getHoehe()  : " << pRect->getHoehe() << endl;
	cout << "pRect->getFlaeche(): " << pRect->getFlaeche() << endl;

	auto* pRectCopy = new Rechteck(*pRect);

	cout << "pRect    : " << pRect << endl;
	cout << "pRectCopy: " << pRectCopy << endl;

	pRectCopy->setX(5);
	pRectCopy->setY(5);

	cout << "pRectCopy->getX()      : " << pRectCopy->getX() << endl;
	cout << "pRectCopy->getY()      : " << pRectCopy->getY() << endl;
	cout << "pRectCopy->getBreite() : " << pRectCopy->getBreite() << endl;
	cout << "pRectCopy->getHoehe()  : " << pRectCopy->getHoehe() << endl;
	cout << "pRectCopy->getFlaeche(): " << pRectCopy->getFlaeche() << endl;

	delete pRect;
	delete pRectCopy;

	Farbe f = Farbe(0, 0, 255);

	auto* pGebilde = new Gebilde(2, 4, 100, 200, &f);
	
	//oder
	auto* pGebilde1 = new Gebilde(2, 4, 100, 200, new Farbe(255, 0, 0));

	Farbe* farbe2 = pGebilde1->getFarbe();

	cout << "Farbe(" << farbe2->rot << ", " << farbe2->gruen << ", " << farbe2->blau << ")";
	cout << endl;

	delete pGebilde1->getFarbe();
	delete pGebilde1;

	f.gruen = 255;

	cout << "pGebilde->getRechteck()->getX()      : " << 
		pGebilde->getRechteck()->getX() << endl;

	cout <<	"pGebilde->getRechteck()->getY()      : " <<
		pGebilde->getRechteck()->getY() << endl;

	cout <<	"pGebilde->getRechteck()->getBreite() : " << 
		pGebilde->getRechteck()->getBreite() << endl;

	cout <<	"pGebilde->getRechteck()->getHoehe()  : " << 
		pGebilde->getRechteck()->getHoehe() << endl;

	cout <<	"pGebilde->getRechteck()->getFlaeche(): " << 
		pGebilde->getRechteck()->getFlaeche() << endl;

	cout << "pGebilde->getFarbe()->rot            : " <<
		pGebilde->getFarbe()->rot << endl;

	cout << "pGebilde->getFarbe()->gruen          : " <<
		pGebilde->getFarbe()->gruen << endl;

	cout << "pGebilde->getFarbe()->blau           : " <<
		pGebilde->getFarbe()->blau << endl;

	delete pGebilde;

	for (int i = 0; i < 10; i++)
	{
		autoPointer();
	}

	return EXIT_SUCCESS;
}

void verwendeMeineKlasse()
{
	MeineKlasse* pMK = new MeineKlasse();

	return;

	delete pMK;
}

void autoPointer()
{
	auto_ptr<MeineKlasse> pMK(new MeineKlasse());


}
