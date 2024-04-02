#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
    
};

int main(){
    mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;     
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "alamat mahasiswa : ";
    cin >> mhs.alamat;
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nim :" << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n alamat : " << mhs.alamat;
    cout << "\n Umur : " << mhs.umur;

};