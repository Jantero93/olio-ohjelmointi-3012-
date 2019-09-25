#include "Kalenterimerkinta.h"

Kalenterimerkinta::Kalenterimerkinta():pvm_(), klo_(), asia_(), muistutus_(false) //oletusrakentaja
{
}

Kalenterimerkinta::Kalenterimerkinta(Paivays pvm, Kello klo, string asia, bool muistutus):pvm_(pvm), klo_(klo), asia_(asia), muistutus_(muistutus) { //parametrinen rakenta

}

Kalenterimerkinta::Kalenterimerkinta(const Kalenterimerkinta & alkup): pvm_(alkup.pvm_), klo_(alkup.klo_), asia_(alkup.asia_), muistutus_(alkup.muistutus_)
{
}

Kalenterimerkinta::~Kalenterimerkinta()
{
}

Paivays Kalenterimerkinta::annaPvm()
{
	return pvm_;
}

Kello Kalenterimerkinta::annaKlo()
{
	return klo_;
}

string Kalenterimerkinta::annaAsia()
{
	return asia_;
}

bool Kalenterimerkinta::annaMuistutus()
{
	return muistutus_;
}

void Kalenterimerkinta::asetaPvm(Paivays pvm)
{
	//pvm_ = pvm //mutta meillä ei ole sijoitus operaattoria toteutettu Paivays-luokkaan
	pvm_.asetaPaiva(pvm.annaPaiva());
	pvm_.asetaKuukausi(pvm.annaKuukausi());
	pvm_.asetaVuosi(pvm.annaVuosi());
}

void Kalenterimerkinta::asetaKello(Kello klo)
{
	klo_.asetaSec(klo.annaSec());
	klo_.asetaMin(klo.annaMin());
	klo_.asetaHour(klo.annaHour());

}

void Kalenterimerkinta::asetaAsia(string asia)
{
	asia_ = asia; //string-luokassa on sijoitus operaattori
}

void Kalenterimerkinta::asetaMuistutus(bool muistutus)
{
	muistutus_ = muistutus;
}

void Kalenterimerkinta::tulosta()
{
	std::cout << "Paivays on: ";
	pvm_.tulostaPaivays(); 
	std::cout << "Kellonaika on: ";
	klo_.tulostaAika();
	std::cout << "Asia/Aihe: ";
	annaAsia();
	std::cout << "Muistutus: ";

	if (annaMuistutus() == true) {
		std::cout << "Paalla" << std::endl;
	}

	else {
		std::cout << "Ei paalla" << std::endl;
	}
}

void Kalenterimerkinta::kysyTiedot()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	string aihe;
	char valinta = 'n';

	//päiväyksen kysyminen
	pvm_.kysyPaivays();

	//ajan kysyminen
	klo_.kysyAika();

	//asia tai aihee
	cout << "Halytyksen aihe: ";
	cin >> aihe;
	asetaAsia(aihe);

	//halytys
	cout << "Asetetaanko halytys/muistutus Y/n: ";
	cin >> valinta;

	if (toupper(valinta) == 'Y') {
		asetaMuistutus(true);
	}

	else {
		asetaMuistutus(false);
	}

}
