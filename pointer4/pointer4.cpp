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

int main()
{
}
