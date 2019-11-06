#pragma once
#include "Paivays.h";

using std::cout; using std::endl;

Paivays::Paivays() : pp_(1), kk_(1), vv_(1970)
{
	cout << "Paivays: oletusrakentaja " << this << endl;
}

Paivays::Paivays(int pp, int kk, int vv) : pp_(pp), kk_(kk), vv_(vv)
{
/* try throw catch shaibaa */

}



//kopiorakentaja toteutus
Paivays::Paivays(const Paivays &alkup): pp_(alkup.pp_), kk_(alkup.kk_), vv_(alkup.vv_)
{
	cout << "Paivays: kopiorakentaja " << this << endl;
}

Paivays::~Paivays()
{
	cout << "Paivays: purkaja " << this << endl;
}

int Paivays::annaPaiva() {
	return pp_;
}

int Paivays::annaKuukausi() {
	return kk_;
}

int Paivays::annaVuosi() {
	return vv_;
}

void Paivays::asetaPaiva(int pp) {
	pp_ = pp;
}

void Paivays::asetaKuukausi(int kk) {
	kk_ = kk;
}

void Paivays::asetaVuosi(int vv) {
	vv_ = vv;
}

//31 päivää --> tammi, maalis, touko, heinä, elo, loka, joulu 1, 3, 5, 7, 8, 10, 12
void Paivays::lisaaPaiva()
{
	
	pp_++;

	if (pp_ == 29 && karkausvuosi_(vv_) == false || (pp_ == 30 && karkausvuosi_(vv_) == true)) {

		//helmikuu
		if (kk_ == 2) {

			if (karkausvuosi_(vv_) == true && pp_==30) {
				pp_ = 1;
				kk_ = 3;
				return;
			}

			else {
				pp_ = 1;
				kk_ = 3;
				return;
			}
		}

	}
		
	if (pp_ == 32) {

		//tammi
		if (kk_ == 1) {
			kk_ = 2;
			pp_ = 1;
			return;
		}

		//maalis
		if (kk_ == 3) {
			kk_ = 4;
			pp_ = 1;
			return;
		}

		//touko
		if (kk_ == 5) {
			kk_ = 6;
			pp_ = 1;
			return;
		}

		//heinä
		if (kk_ == 7) {
			kk_ = 8;
			pp_ = 1;
			return;
		}

		//elo
		if (kk_ == 8) {
			kk_ = 9;
			pp_ = 1;
			return;
		}

		//loka
		if (kk_ == 10) {
			kk_ = 11;
			pp_ = 1;
			return;
		}

		//jouku
		if (kk_ == 12) {
			kk_ = 1;
			pp_ = 1;
			vv_++;
			return;
		}

	}

	if (pp_ == 31) {

		//huhti
		if (kk_ == 4) {
			kk_ = 5;
			pp_ = 1;
			return;
		}

		//kesä
		if (kk_ == 6) {
			kk_ = 7;
			pp_ = 1;
			return;
		}

		//syys
		if (kk_ == 9) {
			kk_ = 10;
			pp_ = 1;
			return;
		}

		//marras
		if (kk_ == 11) {
			kk_ = 12;
			pp_ = 1;
			return;
		}

	}
	   	 
}

void Paivays::tulostaPaivays() {
	cout << pp_ << "." << kk_ << "." << vv_ << endl;
	karkausvuosi_(vv_);
}

void Paivays::montakoPaivaaKuukaudessa()
{
	if (kk_ == 1 || kk_ == 3 || kk_ == 5 || kk_ == 7 || kk_ == 8 || kk_ == 10 || kk_ == 12) {
		std::cout << "Kuukaudessa on 31 paivaa \n";
	}

	if (kk_ == 4 || kk_ == 6 || kk_ == 9 || kk_ == 11) {
		std::cout << "Kuukaudessa on 30 paivaa \n";
	}

	if (kk_ == 2) {
		if (karkausvuosi_(vv_) == true) {
			std::cout << "Kuukaudessa on 29 paivaa \n";
		}

		else {
			std::cout << "Kuukaudessa on 28 paivaa \n";
		}
	}

}

bool Paivays::karkausvuosi_(int vv_)
{
	//neljällä jaollinen --> on karkausvuosi
	if (vv_ % 4 == 0) {

		//vuodet jaettu sadalla, jos ei ole neljällä jaollinen --> ei karkausvuosi, muuten on
		if ((vv_ / 100) % 4 != 0) {
			return false;
		}

		else {
			return true;
		}
	}

		return false;
}
