#include <iostream>
#include <string>
using namespace std;  //ini yg replace (pos,n "baru")

int main() {
    string kalimat = "Saya suka apel";

    kalimat.replace(10, 4, "wortel");  // dari index ke-10, hapus 4 huruf ("apel"), ganti "wortel"

    cout << kalimat << endl;

    return 0;
}
