#include "Murtoluku.h";
#include <iostream>;

int main() {
	Murtoluku ml1;
	Murtoluku ml2(1, 3);
	Murtoluku ml3;

	ml1.tulosta();
	ml2.tulosta();
	ml3.kysyTiedot();
	ml3.sievenna();
	ml3.tulosta();

	system("pause");
	return 0;
}