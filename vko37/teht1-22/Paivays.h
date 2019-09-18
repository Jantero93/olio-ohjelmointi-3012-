#pragma once
#include <iostream>

class Paivays {
public:
	Paivays(); // oletusrakenne
	Paivays(int pp, int kk, int vv); //parametrinen rakentaja
	~Paivays(); //purkaja

	// getters
	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();

	// setters
	void asetaPaiva(int pp);
	void asetaKuukausi(int kk);
	void asetaVuosi(int vv);

	void tulostaPaivays();

private:
	int pp_;
	int kk_;
	int vv_;
};
