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

// Kelas siswa dengan data member int id dan fungsi-fungsi member setId dan displayAll
class siswa {
private:
    int id;


public:
    void setId(int pId);
    void displayAll(orang& a); // Menggunakan objek dari kelas orang sebagai argumen
};

// Implementasi fungsi displayAll dari kelas siswa
void siswa::displayAll(orang& a) {
    cout << id << endl << a.nama;
}

// Implementasi fungsi setNama dari kelas orang
void orang::setNama(string pNama) {
    nama = pNama;
}

// Implementasi fungsi setId dari kelas siswa
void siswa::setId(int pId) {
    id = pId;
}

int main() {
    orang joko;
    joko.setNama("Joko Susilo"); // Mengatur nama orang
    siswa joko_siswa;
    joko_siswa.setId(1); // Mengatur id siswa
    joko_siswa.displayAll(joko); // Menampilkan informasi siswa dengan objek orang sebagai argumen
    return 0;
}