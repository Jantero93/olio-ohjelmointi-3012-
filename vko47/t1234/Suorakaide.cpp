#include "Suorakaide.h"



Suorakaide::Suorakaide(): pituus_(1), leveys_(1)
{
}

Suorakaide::Suorakaide(double pituus, double leveys): pituus_(pituus), leveys_(leveys)
{
}

Suorakaide::Suorakaide(const Suorakaide & alkup):pituus_(alkup.pituus_), leveys_(alkup.leveys_)
{
}


Suorakaide::~Suorakaide()
{
}

 Suorakaide & Suorakaide::operator=(const Suorakaide & alkup)
{
	if (this != &alkup) {
		pituus_ = alkup.pituus_;
		leveys_ = alkup.leveys_;
	}
	return *this;
}

double Suorakaide::annaPituus() const
{
	return pituus_;
}

double Suorakaide::annaLeveys() const
{
	return leveys_;
}

void Suorakaide::asetaPituus(double pituus)
{
	pituus_ = pituus;
}

void Suorakaide::asetaLeveys(double leveys)
{
	leveys_ = leveys;
}

double Suorakaide::pintaAla() const
{
	return pituus_ * leveys_;
}
