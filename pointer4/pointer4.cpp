#include <iostream>
#include <string>
using namespace std;

// Deklarasi kelas mahasiswa
class mahasiswa
{
private:
	string nama;

public:
	// Mendeklarasikan setNama sebagai friend function dari kelas mahasiswa
	friend void setNama(mahasiswa& a, string);
};

// Implementasi friend function setNama
void setNama(mahasiswa& a, string pNama)
{
	a.nama = pNama; // Mengatur nilai anggota nama dari objek mahasiswa
}

int main()
{
	mahasiswa joko; // Membuat objek mahasiswa dengan nama joko
	setNama(joko, "Kairi Kumar"); // Memanggil fungsi setNama untuk mengatur nama objek menjadi "Kairi Kumar"
	return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program berakhir tanpa masalah
}
