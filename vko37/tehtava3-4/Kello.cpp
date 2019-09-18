#include "Kello.h";

int Kello::annaSec() {
	return sec_;
}

int Kello::annaMin() {
	return min_;
}

int Kello::annaHour() {
	return hour_;
}

void Kello::asetaSec(int sec) {
	sec_ = sec;

	if (sec_ == 60) {
		sec_ = 0;

		min_++;
		//
		Kello::asetaMin(min_);
	}
}

void Kello::asetaMin(int min) {
	min_ = min;	

	if (min_ == 60) {
		min_ = 0;
		hour_++;
		Kello::asetaHour(hour_);
	}	
}

void Kello::asetaHour(int hour) {
	hour_ = hour;

	if (hour_ == 24) {
		hour_ = 0;
	}	
}

void Kello::tulostaAika() {
	std::cout << hour_ << ":" << min_ << ":" << sec_ << std::endl;
}

void Kello::asetaAika(int hour, int min, int sec) {

	Kello::asetaSec(sec);
	Kello::asetaMin(min);
	Kello::asetaHour(hour);
}

void Kello::kysyAika() {
	using std::cout; using std::endl; using std::cin;

	int hour;
	int min;
	int sec;

	cout << "Anna tunnit: "; 
	cin >> hour;
	cout << "Anna minuutit: ";
	cin >> min;
	cout << "Anna sekunnit: ";
	cin >> sec;

	Kello::asetaHour(hour);
	Kello::asetaMin(min);
	Kello::asetaSec(sec);
}

void Kello::lisaaSekuntti() {
	int muuttuja = Kello::annaSec();
	muuttuja++;
	Kello::asetaSec(muuttuja);
}