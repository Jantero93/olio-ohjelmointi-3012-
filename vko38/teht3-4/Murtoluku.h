#pragma once
class Murtoluku
{

public:
	//oletus
	Murtoluku();
	//parametri rakentaja
	Murtoluku(int os, int nim);
	//purkaja
	~Murtoluku();

	//getterit
	int annaOsoittaja();
	int annaNimittaja();
	void asetaOsoitteaja(int os);
	void asetaNimittaja(int nim);

	//herkku metodit
	void kysyTiedot();
	void tulosta();
	void sievenna();

private:
	int os_;
	int nim_;
	int SYT();
};

