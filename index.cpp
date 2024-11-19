#include <iostream>

using namespace std;

int main() {
    string name, nim;
    cout << "Masukkan nama: "; 
    cin >> name;
    cout << "Masukkan NIM: "; 
    cin >> nim;
    int jumlahBilGanjil = 0;
    int totalBilGanjil = 0;

    for(int i = 1; i<= 100; i++) {
        if(i % 2 != 0) {
            totalBilGanjil = totalBilGanjil + i;
            jumlahBilGanjil++;
        }
    }
        cout << "Jumlah Bilangan Ganjil adalah: " << jumlahBilGanjil << endl; 
        cout << "Total Penjumlahan Bilangan Ganjil adalah: " << totalBilGanjil << endl; 
        cout << "Bilangan terakhir: " << 100 << endl; 
    return 0;
}