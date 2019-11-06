#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main() {

	vector <int> luvut;

	luvut.push_back(1);
	luvut.push_back(2);
	luvut.push_back(7);



	try {
		cout << luvut.at(4) << endl;
	}

	catch (const std::out_of_range& e) {
		cerr << "Yli-indeksointi" << endl;
	}

	 /* Järjestyksellä on väliä, tiukin ensin, sitten sallivampaan suuntaan */
	catch (const std::exception& e) {
		cerr << "Virhe " << e.what() << endl;
	}

	//vector.at(x) try catch throw
	catch (...) {

	}


	system("pause");
	return 0;
} 