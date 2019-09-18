#include "Murtoluku.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Murtoluku::Murtoluku() : os_(1), nim_(1)
{
	cout << "Murtoluku: oletusrakentaja " << this << endl;
}

Murtoluku::Murtoluku(int os, int nim): os_(os), nim_(nim)
{
	cout << "Murtoluku: parametrinen rakentaja: " << this << endl;
}


Murtoluku::~Murtoluku()
{
	cout << "Murtoluku: purakaja " << this << endl;
}

int Murtoluku::annaOsoittaja()
{
	return os_;
}

int Murtoluku::annaNimittaja()
{
	return nim_;
}

void Murtoluku::asetaOsoitteaja(int os)
{
	os_ = os;
}

void Murtoluku::asetaNimittaja(int nim)
{

	nim_ = nim;
}

void Murtoluku::kysyTiedot()
{
	cout << "Anna osoittaja: ";
	cin >> os_;
	cout << "Anna nimittaja: ";
	cin >> nim_;

}

void Murtoluku::tulosta()
{
	cout << os_ << "/" << nim_ << endl;
}

void Murtoluku::sievenna()
{
	int isotekija = SYT();
	os_ = os_ / isotekija;
	nim_ = nim_ / isotekija;
}

int Murtoluku::SYT()
{
	int a = os_;
	int b = nim_;
	int temp;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;	
}

