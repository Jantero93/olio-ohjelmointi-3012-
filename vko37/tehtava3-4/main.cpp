#include "Kello.h";

int main() {
	Kello opettajan;

	opettajan.asetaAika(14, 49, 12);
	std::cout << "Esiasetettu aika tehtavasta: ";
	opettajan.tulostaAika();

	opettajan.kysyAika();
	opettajan.tulostaAika();

	for (int i = 0; i < 9999; i++) {
		opettajan.lisaaSekuntti();
		opettajan.tulostaAika();
	}


	system("pause");
	return 0;
}