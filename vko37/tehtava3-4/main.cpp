#include "Kello.h";

int main() {
	Kello opettajan(12, 55, 12);
	Kello casio;

	using std::cout; using std::endl;
	/*
	opettajan.asetaAika(14, 49, 12);
	std::cout << "Esiasetettu aika tehtavasta: ";
	opettajan.tulostaAika();

	opettajan.kysyAika();
	opettajan.tulostaAika();

	for (int i = 0; i < 300; i++) {
		opettajan.lisaaSekuntti();
		opettajan.tulostaAika();
	}
	*/

	cout << "Opettajan tulostus" << endl;
	opettajan.tulostaAika();
	cout << "Casion aika " << endl;
	casio.tulostaAika();

	


	system("pause");
	return 0;
}