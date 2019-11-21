#pragma once
#include "Kuvio.h"
class Ympyra :
	public Kuvio
{
public:
	Ympyra(); //oletus
	Ympyra(double sade); //parametri
	Ympyra(const Ympyra& alkup); // kopio
	~Ympyra(); //tuhoaja

	Ympyra& operator=(const Ympyra& alkup); //operator

	double annaSade() const; //get
	void asetaSade(double sade); //set

	double pintaAla() const;


private:
	double sade_;
};

