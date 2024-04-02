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
    mahasiswa mhs [3];
    for (int i = 0; i < 3; i++) { 
        cout << "data ke-" << (i + 1) <<":" << endl;
        cout << "nomor mahasiswa : "; getline (cin, mhs[i].nim);
        cout << "nama mahasiswa : "; getline (cin, mhs[i].nama);
        cout << "alamat mahasiswa : " <<endl;
        cout << "\t nama desa :";
        cin >> mhs[i].alamat.desa;
        cout << "\t nama kota : "; 
        cin >> mhs[i].alamat.kota;
        cout << "umur mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore (1, '\n');
        cout << endl;
    }
        
    }
}