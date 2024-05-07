#include <iostream>
#include <string>
using namespace std;

class pelajar; // Deklarasi kelas pelajar agar dapat digunakan di dalam kelas manusia
class manusia // Deklarasi kelas manusia
{
public:
	void showNilaiPelajar(pelajar& x); // Deklarasi fungsi showNilaiPelajar yang akan menampilkan nilai pelajar
};

class pelajar // Deklarasi kelas pelajar
{
private:
	int nilai; // Anggota privat untuk menyimpan nilai pelajar

public:
	pelajar() { nilai = 100; } // Konstruktor untuk menginisialisasi nilai dengan 100
	friend void manusia::showNilaiPelajar(pelajar& x); // Mendeklarasikan fungsi showNilaiPelajar sebagai friend function
};

void manusia::showNilaiPelajar(pelajar& x) // Implementasi fungsi showNilaiPelajar
{
	cout << x.nilai; // Menampilkan nilai dari objek pelajar yang diberikan
}

int main()
{
	manusia budi; // Membuat objek manusia dengan nama budi
	pelajar pbudi; // Membuat objek pelajar dengan nama pbudi
	budi.showNilaiPelajar(pbudi); // Memanggil fungsi showNilaiPelajar untuk menampilkan nilai pelajar yang dimiliki objek pbudi
	return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program berakhir tanpa masalah
}
