#include <iostream>
using namespace std;

int main() {

	int nBilanganA, nBilanganB;
	string status;

	srand(time(0));

	nBilanganA = rand() % 6;
	nBilanganB = rand() % 2; 

	if (nBilanganA == nBilanganB) {
		status = "bilangan sama besar";
	}
	else if (nBilanganA > nBilanganB)  {
		status = "bilanganA lebih besar dari bilanganB";
	}
	else {
		status = "bilanganA lebih kecil dari bilanganB";

	}

	cout << "bilangan pertama adalah " << nBilanganA << endl;
	cout << "bilangan kedua adalah " << nBilanganB << endl;
	cout << " statusnya adalah " << status << endl;

	return 0;

}