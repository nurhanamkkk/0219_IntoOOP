#include <iostream>
using namespace std;

class bangunDatar{
     
     //akses modifier
     private:
         float panjang, Lebar;
     public:
          float Luas;

          void input() {  //methode input persegi panjang 
           
           cout << "Masukkan panjangnya = ";
           cin >> panjang;
           cout << "Masukkan Lebaernya = ";
           cin >> Lebar;
          }   

          float hitungluas (){
              return panjang * Lebar;
          } 

          void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << Lebar << endl;
            cout << "Luasnya = " << Luas << endl;
          }
};

int main () {
    bangunDatar pp; // dekalarasi objek pp dari bangunDatar
    pp.input();
    pp.display();

    return 0;
}