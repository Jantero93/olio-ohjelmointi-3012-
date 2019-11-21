#include "Ympyra.h"
#include <cmath>


Ympyra::Ympyra() :sade_(1)
{
}

Ympyra::Ympyra(double sade): sade_(sade)
{
	
}

Ympyra::Ympyra(const Ympyra & alkup): sade_(alkup.sade_)
{

}


Ympyra::~Ympyra()
{
}

Ympyra & Ympyra::operator=(const Ympyra & alkup)
{
	if (this != &alkup) {
		sade_ = alkup.sade_;
	}
	return *this;
}

double Ympyra::annaSade() const
{
	return sade_;
}

void Ympyra::asetaSade(double sade)
{
	sade_ = sade;
}

double Ympyra::pintaAla() const
{
	return 4 * atan(1.0)*sade_*sade_;
}
