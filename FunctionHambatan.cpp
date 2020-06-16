#include <iostream>
using namespace std ;

void cetakInfo () {
	cout << "Akan menampilkan hasil Hambatan Rangkaian Seri dan Paralel" << endl ;
}

double hasilHambatanSeri (double a, double b, double c) {
	return a + b + c ;
}

double hasilHambatanParalel (double x, double y, double z) {
	return 1/x + 1/y + 1/z ;
}

int main () {
	cetakInfo () ;
	double a, b, c, x, y, z ;
	cout << "*) tekan enter setelah memasukkan satu nilai angka!" << endl ;
	cout << "Masukkan angka untuk Hambatan Seri (R1, R2, R3) :" << endl ;
	cin >> a >> b >> c ;
	cout << "Masukkan angka untuk Hambatan Paralel (R1, R2, R3) :" << endl ;
	cin >> x >> y >> z ;
	cout << "Hasil Perhitungan Hambatan Rangkaian Seri = " << hasilHambatanSeri (a, b, c) << endl ;
	cout << "Hasil Perhitungan Hambatan Rangkaian Paralel = " << hasilHambatanParalel (x, y, z) ;
	return 0 ;
}
