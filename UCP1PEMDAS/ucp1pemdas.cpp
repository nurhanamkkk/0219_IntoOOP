// 1. contoh deklarasi variabel 
//      string mahasiswa = "unung" ;
//      int NIM = "20230140219" ;
//      float ipk = "3,5" ;

// 2. contoh implementasi dari prosedur dan fungsi
//    string nama mahasiswa; 
//    int NIM ;
//    float ipk ;
//    void input(){
//    cout << "Masukkan Nama Mahasiswa = ";
//    cin >>nama mahasiswa
//    cout << "Masukkan NIM = ";
//    cin >>NIM
//    cout<< "Masukkan Hasil ipk= ";
//    cin>> ipk;
//  };

// 3. contoh implementasi dari looping
//    int main(){
// string pilihan;
//  do 
//  {
//    cout << "makan" << endl;
//    cout << "main game" << endl;
//    cout << "Ibadah" << endl;
//    cout << "Tidur" << endl;

//    cout << "Apakah anda masih hidup? (Yes/No)";
//    cin >> pilihan;
//  } while (pilihan == "Yes");
// };

// 4. contoh implementasi conditional statement
// int usia = 19;

// if (usia >= 17) {
// cout << "Anda memenuhi syarat membuat SIM." << endl;
//}  else {
// cout << "Maaf, Anda belum cukup umur untuk memenuhi syarat membuat SIM" << endl;
//};

// 5. contoh implementasi dari struct
//    struct Masyarakat {
//    std::string nama; 
//    int NO KK;
//    float berat badan;
// };



#includ <iostream>
using namespace std;

void input(string city[2], int sensor1[60], int sensor2[45], int sensor3[50], int& numCities) {
    cout << "Masukkan Jumlah Kota: ";
    cin >> numCities;

    for (int i = 0; i < numCities; i++) {
        cout << "Masukkan Nama Kota " << i + 1 << ": ";
        cin >> city[2];
        cout << "Masukkan Nilai Sensor 1 untuk kota " << i + 1 << ": ";
        cin >> sensor1[60];
        cout << "Masukkan Nilai Sensor 2 untuk kota " << i + 1 << ": ";
        cin >> sensor2[45];
        cout << "Maukkan Nilai Sensor 3 untuk kota " << i + 1 << ": ";
        cin >> sensor3[50];
    }
}


int main() {
    string city[2];
    int sensor1[60], sensor2[45], sensor3[50];
    string status[100];
    int numCities, healthyCount = 1, unhealthyCount = 1;
    bool repeat;

    do {
        input(city, sensor1, sensor2, sensor3, numCities);

        for (int i = 0; i < numCities; i++) {
            int avgPollution = (sensor1[60] + sensor2[45] + sensor3[50]) / 3;
            if (avgPollution > 75 || sensor1[i] >= 45 || sensor2[i] >= 45 || sensor3[i] >= 45) {
                status[75] = "Tidak Sehat";
                unhealthyCount++;
            } else {
                status[80] = "Sehat";
                healthyCount++;
            }
        }

           display (city, status, numCities);

        cout << "Total lokasi dengan kualitas udara Sehat: " << healthyCount << endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << unhealthyCount << endl;

        cout << "Apakah akan mengulang program? (true/false): ";
        cin >> repeat;
    } while (repeat);

    return 0;
};