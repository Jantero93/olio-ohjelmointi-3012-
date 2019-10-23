#include "funktiot.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void menu() {
	cout << "1) Lisaa koulutusohjelma" << endl;
	cout << "2) Tulosta koulutusohjelmien nimet" << endl;
	cout << "3) Tulosta koulutusohjelmien maara" << endl;
	cout << "4) Lisaa koulutusohjelmaan opettaja" << endl;
	cout << "5) Tulosta koulutusohjelman opettajat" << endl;
	cout << "6) Lisaa koulutusohjelmaan opiskelija" << endl;
	cout << "7) Tulosta koulutusohjelmat opiskelijat" << endl;
	cout << "8) Poista koulutusohjelma" << endl;
	cout << "9) Poista opettaja" << endl;
	cout << "10) Poista opiskelija" << endl;
	cout << "11) Paivita koulutusohjelman nimi" << endl;
	cout << "12) Paivita opettajan tiedot" << endl;
	cout << "13) Paivita opiskelijan tiedot" << endl;
	cout << "14 Lue tiedot" << endl;
	cout << "15 Tallenna tiedot" << endl;
	cout << "0) Lopeta" << endl;
}