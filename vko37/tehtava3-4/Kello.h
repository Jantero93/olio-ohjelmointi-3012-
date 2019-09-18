#pragma once
#include <iostream>

class Kello {
public:

	//oletus
	Kello();
	//parametri rakentaja
	Kello(int sec, int min, int hour);
	//purkaja
	~Kello();

	//getter
	int annaSec();
	int annaMin();
	int annaHour();

	//setter
	void asetaSec(int);
	void asetaMin(int);
	void asetaHour(int);

	//muut
	void tulostaAika();
	void kysyAika();
	void asetaAika(int, int, int);
	void lisaaSekuntti();
		
private:
	int sec_;
	int min_;
	int hour_;
};