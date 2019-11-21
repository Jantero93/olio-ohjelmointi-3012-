#pragma once
#include "Kuvio.h"
class Suorakaide :
	public Kuvio
{
public:
	Suorakaide();
	Suorakaide(double pituus_, double leveys_);
	Suorakaide(const Suorakaide& alkup);
	~Suorakaide();
	Suorakaide& operator=(const Suorakaide& alkup);

	double annaPituus() const;
	double annaLeveys() const;
	void asetaPituus(double pituus);
	void asetaLeveys(double korkeus);

	double pintaAla() const;

private:
	double pituus_;
	double leveys_;
};

