#include "Koulutusohjelma.h"



Koulutusohjelma::Koulutusohjelma():nimi_(),
opiskelijat_(), opettajat_()
{
}

Koulutusohjelma::Koulutusohjelma(const string& nimi):nimi_(nimi),
opiskelijat_(), opettajat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja temp;
	temp.kysyTiedot();
	opettajat_.push_back(temp);
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija temp;
	temp.kysyTiedot();
	opiskelijat_.push_back(temp);
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++)
	{
		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelija() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++)
		opiskelijat_[i].tulosta();
}
