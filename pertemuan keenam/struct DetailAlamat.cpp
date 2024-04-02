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

int main (){
    mahasiswa mhs;
    cout << "nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;

    cout << "alamat mahasiswa : ";
    cout << "\t nama kota : ";
    cin >> mhs.alamat.kota;

    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n alamat : ";
    cout << "\n desa : " << mhs.alamat.desa;
    cout << "\n kota : " << mhs.alamat.kota;
    cout << "\n umur : " << mhs.umur;
};