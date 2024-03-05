#include <iostream>
using namespace std;

int main()
{
	int nBilangan;
	string status;

	srand(time(0));

	nBilangan = rand() % 6;

	if (nBilangan % 2 == 0) {
		status = "genap";

	}
	else{
		status = "ganjil";
	}
   
	cout << "bilangannya adalah " << nBilangan << endl;
	cout << "statusnya adalah " << status << endl;

	return 0;
}