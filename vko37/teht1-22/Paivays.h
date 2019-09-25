#pragma once
#include <iostream>

class Paivays {
public:
	Paivays(); // oletusrakenne
	Paivays(int pp, int kk, int vv); //parametrinen rakentaja
	Paivays(const Paivays &alkup); //kopiorakentaja, parametrina Paivays-tyyppinen vakioviittaus
	~Paivays(); //purkaja

	// getters
	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();

	// setters
	void asetaPaiva(int pp);
	void asetaKuukausi(int kk);
	void asetaVuosi(int vv);

	//extra metodit
	void lisaaPaiva();
	void tulostaPaivays();
	void montakoPaivaaKuukaudessa();

private:
	int pp_;
	int kk_;
	int vv_;
	bool karkausvuosi_(int vv_);
};
