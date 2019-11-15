#include "Koulu.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::ofstream; using std::ifstream;

Koulu::Koulu() :nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(const string& nimi):nimi_(nimi), koulutusohjelmat_()
{
}


Koulu::~Koulu()
{
}

void Koulu::lisaaKoulutusOhjelma()
{	
	Koulutusohjelma temp;
	string nimi;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, nimi);	
	
	temp.asetaNimi(nimi);
	koulutusohjelmat_.push_back(temp);
	cout << "Lisatty!" << endl;
	
	//koulutusohjelmat_.push_back(Koulutusohjelma(nimi));
}

string Koulu::annaNimi() const
{
	return nimi_;
}

void Koulu::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

int Koulu::annaKoulutuohjelmienMaara()
{
	int koulutusohjelmienMaara = koulutusohjelmat_.size();
	return koulutusohjelmienMaara;
}

void Koulu::tulostaKoulutusOhjelmat() const
{	
	string temp;
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
	temp = koulutusohjelmat_[i].annaNimi();
	cout << temp << endl;
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{	
	cout << "Koulutusohjelmien maara: ";
	cout << koulutusohjelmat_.size() << std::endl;
}

void Koulu::lisaaKoulutusOhjelmaanOpettaja()
{
	
	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].lisaaOpettaja();
		cout << "Lisatty!" << endl;
	}

}

void Koulu::tulostaKoulutusOhjelmanOpettajat() const
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi ==	-1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	}
	
}

void Koulu::tulostaKoulutusOhjelmanOpiskelijat() const
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].tulostaOpiskelija();
	}

}


void Koulu::lisaaKoulutusOhjelmaanOpiskelija()
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].lisaaOpiskelija();
		cout << "Lisatty!" << endl;
	}

}

void Koulu::poistaKoulutusOhjelma() 
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1)
		cout << "Koulutusohjelmaa ei loytynyt" << endl;

	else {
		koulutusohjelmat_.erase(koulutusohjelmat_.begin() + indeksi);
		cout << "Poistettu!" << endl;
	}
}

void Koulu::poistaKoulutusOhjelmastaOpettaja(){
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {		
		koulutusohjelmat_[indeksi].poistaOpettaja();
	}
	
}

void Koulu::poistaKoulutusOhjelmastaOpiskelija()
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].poistaOpiskelija();	
	}
}

void Koulu::paivitaOppilaanTiedot()
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].paivitaOpiskelija();
	}

}

void Koulu::tallennaTiedot()
{
	/* .csv tiedostojen alustus*/

	ofstream opettajat;
	ofstream oppilaat;

	opettajat.open("opettajat.csv", std::ios::trunc);
	opettajat.close();

	oppilaat.open("oppilaat.csv", std::ios::trunc);
	oppilaat.close();

	/*koulutus ohjelmat läpi */
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {		
		koulutusohjelmat_[i].tallennaOpettajat();
		koulutusohjelmat_[i].tallennaOppilaat();
	}
}

void Koulu::lueTiedot()
{
	
	ifstream opettajatFilu;
	ifstream opiskelijatFilu;

	//opettajan
	string koulutusohjelma;
	string etunimi;
	string sukunimi;
	string osoite;
	string puhnumero;
	string palkka;
	string tunnus;
	string opetusala;

	//opiskelijan
	string opiskelijanumero;

	unsigned int indeksi;
	int temp;

		opettajatFilu.open("opettajat.csv");
		if (opettajatFilu.is_open()) {

			while (opettajatFilu.peek() != EOF) {

				//lue rivi kerrallaan tiedostosta
				getline(opettajatFilu, koulutusohjelma, ';');
				getline(opettajatFilu, etunimi, ';');
				getline(opettajatFilu, sukunimi, ';');
				getline(opettajatFilu, osoite, ';');
				getline(opettajatFilu, puhnumero, ';');
				getline(opettajatFilu, palkka, ';');
				getline(opettajatFilu, tunnus, ';');
				getline(opettajatFilu, opetusala);

				if (etsiKoulutusohjelmaTIEDOSTO(koulutusohjelma) == -1) {
					
					koulutusohjelmat_.push_back(Koulutusohjelma(koulutusohjelma)); //jos ei koulutusohjelmaa ole, luo sellainen		
					indeksi = koulutusohjelmat_.size() - 1; // alkiot alkaa nollasta
					koulutusohjelmat_[indeksi].lueOpettajat(etunimi, sukunimi, osoite, puhnumero, palkka, tunnus, opetusala); //luo sen koulutusohjelman opettajat tiedostosta
					
				}

				else {
					temp = etsiKoulutusohjelmaTIEDOSTO(koulutusohjelma); //hae oikea alkio jos koulutusohjelma on olemassa
					koulutusohjelmat_[temp].lueOpettajat(etunimi, sukunimi, osoite, puhnumero, palkka, tunnus, opetusala); // jos sellainen on olemassa, luo tiedot
				}
			}

		}
		else {
			cout << "Tiedosto ei aukea!" << endl;
		}
		opettajatFilu.close();

		indeksi = 0;
		opiskelijatFilu.open("oppilaat.csv");

		if (opiskelijatFilu.is_open()) {

			while (opiskelijatFilu.peek() != EOF) { //lue rivi kerrallaan
				getline(opiskelijatFilu, koulutusohjelma, ';');
				getline(opiskelijatFilu, etunimi, ';');
				getline(opiskelijatFilu, sukunimi, ';');
				getline(opiskelijatFilu, osoite, ';');
				getline(opiskelijatFilu, puhnumero, ';');
				getline(opiskelijatFilu, opiskelijanumero);

				if (etsiKoulutusohjelmaTIEDOSTO(koulutusohjelma) == -1) { //koulutusohjelmaa ei ole, luo

					koulutusohjelmat_.push_back(Koulutusohjelma(koulutusohjelma));
					indeksi = koulutusohjelmat_.size() - 1;
					koulutusohjelmat_[indeksi].lueOpiskelijat(etunimi, sukunimi, osoite, puhnumero, opiskelijanumero);
					
				}

				else {
					temp = etsiKoulutusohjelmaTIEDOSTO(koulutusohjelma);
					koulutusohjelmat_[temp].lueOpiskelijat(etunimi, sukunimi, osoite, puhnumero, opiskelijanumero);
				}
			}
			
		}

		else {
			cout << "Tiedosto ei aukea!" << endl;
		}

}





void Koulu::paivitaKoulutusOhjelmanNimi()
{
	int indeksi = etsiKoulutusohjelma();
	string temp;

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		cout << "Anna koulutusohjelman uusi nimi: "; 
		getline(cin, temp);
		koulutusohjelmat_[indeksi].asetaNimi(temp);
	}
}

void Koulu::paivitaOpettajanTiedot()
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].paivitaOpettaja();
	}
}


//etsintä rutiini
int Koulu::etsiKoulutusohjelma() const
{
	string temp;
	cout << "Etsi koulutusohjelma: ";
	getline(cin, temp);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) {
			return i;
		}
	}

	return -1; /* Ei löytynyt, palauta -1 */
}

int Koulu::etsiKoulutusohjelmaTIEDOSTO(string temp) const
{

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) {
			return i;
		}
	}

	return -1; /* Ei löytynyt, palauta -1 */
}