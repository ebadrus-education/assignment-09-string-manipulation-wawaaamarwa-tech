#include <iostream>
#include <string> // yang append
using namespace std;

int main() {
    string kalimat = "Belajar C++ itu ";

    kalimat.append("menyenangkan!");
    cout << kalimat << endl;

    return 0;
}
