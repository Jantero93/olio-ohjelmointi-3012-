#include "Henkilo.h";
#include "Opiskelija.h";
#include "Tyontekija.h";
#include "Opettaja.h";
int main() {

	Henkilo henk1();
	Henkilo henk2("Jukka", "Keijonen", "Aku ankka tie", "313");
	Henkilo henk3(henk2);
	

	Opiskelija op();
	Opiskelija op1("Pentti", "Ahvenisto", "jokutie", "04012344667", "333222111");
	Opiskelija op2(op1);
	
	Tyontekija tk1();
	Tyontekija tk2("matti", "meika", "taastie", "040411111", "9999E", "tunnus");
	Tyontekija tk3(tk2);

	Opettaja o();
	Opettaja o22("asd", "sukunimi", "jokutie", "04040440", "9999", "TUNNUS", "KOODI_ALA");
	Opettaja o33(o22);

	o22.kysyTiedot();
	o22.tulosta();

	op1.kysyTiedot();
	op1.tulosta();
	

	system("pause");
	return 0;
}