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
}
