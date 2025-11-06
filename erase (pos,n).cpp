#include <iostream>
#include <string> 
using namespace std;  //ini erase (pos,n)

int main() {
    string teks = "Belajar C++ itu menyenangkan";

    teks.erase(8, 4);  // mulai dari indeks ke-8, hapus 4 karakter ("C++ ")

    cout << teks << endl;

    return 0;
}
