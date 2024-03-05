#include <iostream>
using namespace std;

int main() {

	int nilaiMatematika, nilaiFisika, nRerata;
	string status;

	cout << "Masukkan Nilai Matematika = ";
	cin >> nilaiMatematika;

	cout << "Masukkan Nilai Fisika = ";
	cin >> nilaiFisika;

	nRerata = (nilaiMatematika + nilaiFisika) / 2;
	
	if (nRerata > 60) {
		status = "lulus";
	}
	else if (nilaiMatematika > 70) {
		status = "lulus";
	}
	else {
		status = "tidak lulus";
	}

	cout << "Nilai MTK = " << nilaiMatematika << endl;
	cout << "Nilai Fisika = " << nilaiFisika << endl;
	cout << " Rata-rata nilai = " << nRerata << endl;
	cout << "statusnya adalah " << status << endl;

	return 0;

}
