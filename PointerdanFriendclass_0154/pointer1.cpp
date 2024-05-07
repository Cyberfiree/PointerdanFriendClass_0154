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
}
