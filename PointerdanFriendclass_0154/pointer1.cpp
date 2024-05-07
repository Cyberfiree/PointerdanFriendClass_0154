#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim; // Variabel anggota untuk Nomor Induk Mahasiswa (NIM)
	void showNim() {
		cout << "No Induk = " << nim << endl; // Fungsi untuk menampilkan NIM mahasiswa
	}
};

int main()
{
	mahasiswa mhs{ 1 }; // Membuat objek mhs dengan NIM awal = 1
	mhs.showNim(); // Menampilkan NIM dari objek mhs

	mahasiswa& refMhs = mhs; // Membuat referensi refMhs untuk merujuk pada objek mhs
	refMhs.nim = 2; // Mengubah NIM objek mhs menggunakan referensi
	mhs.showNim(); // Menampilkan NIM yang telah diperbarui dari objek mhs

	mahasiswa* pMhs = &mhs; // Membuat pointer pMhs yang menunjuk pada objek mhs
	pMhs->nim = 3; // Mengubah NIM objek mhs menggunakan pointer
	pMhs->showNim(); // Menampilkan NIM yang telah diperbarui dari objek mhs

	return 0;
}
