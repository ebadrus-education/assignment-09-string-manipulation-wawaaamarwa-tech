#include <iostream>
#include <string>
using namespace std; //ini yang find ("teks")

int main() {
    string kalimat = "i take your eat everytime";

    size_t posisi = kalimat.find("take");

    if (posisi != string::npos) {  // npos = jika tidak ditemukan
        cout << "\"take\" ditemukan pada indeks ke-" << posisi << endl;
    } else {
        cout << "\"take\" tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
