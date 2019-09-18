#pragma once
#include "Paivays.h";

using std::cout; using std::endl;

Paivays::Paivays() : pp_(1), kk_(1), vv_(1970)
{
	cout << "Paivays: oletusrakentaja " << this << endl;
}

Paivays::Paivays(int pp, int kk, int vv) : pp_(pp), kk_(kk), vv_(vv)
{
	cout << "Paivays: parametrinen rakentaja " << this << endl;
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

void Paivays::tulostaPaivays() {
	cout << pp_ << "." << kk_ << "." << vv_ << endl;
}
