#include <iostream>
#include <string>
using namespace std;

// Deklarasi kelas siswa agar dapat digunakan dalam deklarasi kelas orang
class siswa;

// Kelas orang dengan data member string nama dan fungsi member setNama
class orang {
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa; // Mendeklarasikan kelas siswa sebagai friend class
};

int main() {
}