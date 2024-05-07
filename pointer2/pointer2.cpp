#include <iostream>
using namespace std;

class mahasiswa
{
public:
	int nim; // Variabel anggota untuk Nomor Induk Mahasiswa (NIM)
	void showNim()
	{
		cout << "No Induk = " << nim << endl; // Fungsi untuk menampilkan NIM mahasiswa
	}
};

int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 }; // Membuat objek mhs dengan menggunakan pointer
	mhs->nim = 2; // Mengubah NIM objek mhs menggunakan pointer
	mhs->showNim(); // Menampilkan NIM dari objek mhs
	delete mhs; // Menghapus objek yang dialokasikan secara dinamis dari memori
	return 0;
}
