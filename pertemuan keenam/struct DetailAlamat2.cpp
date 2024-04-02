#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};
struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main () {
    mahasiswa mhs; 
    cout << "nomor mahasiswa : "; getline (cin, mhs.nim);
    cout << "nama mahasiswa : "; getline (cin, mhs.nama);

    cout << "alamat mahasiswa : " <<endl;
    cout << "\t nama desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t nama kota : ";
    cin >> mhs.alamat.kota;
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout <<endl;
    cout <<  "\n nim :" << mhs.nim;
    cout << "\n nama :" << mhs.nama;
    cout << "\n alamac : "
}
    