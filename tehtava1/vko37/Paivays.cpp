#include "Paivays.h";


using std::cout; using std::endl;

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