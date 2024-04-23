#include <iostream>
using namespace std;

class Mahasiswa{
    public: // akses modifier
         string nama;
         int umur;
         string jurusan;

         voide output () {
            cout<< "Nama :" << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan : " << jurusan << endl;
         }
};

class Matakuliah {
    private:
        string kodeMk;
        string namaMK;
        int sks;
    public : 
         void input () {
              cout << "Kode MK :";
              cin >> kodeMk;
              cout << "Nama MK :" ;
              cin >> namaMK;
              cout << sks;
         }

         void output () {
              cout << "Kode Mk : " << kodeMk << endl;
              cout << "Nama MK : " << namaMK << endl;
              cout << "SKS : " << sks << endl;
         }
};

int main () {
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik informatika";
    mhs.output();

    mk.input ();
    mk.output ();

    return 0;

}