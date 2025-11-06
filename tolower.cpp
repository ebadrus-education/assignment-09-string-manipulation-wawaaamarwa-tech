#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "SUka CoDing KALO suKa Kamu ENGGak duLu DeH (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)";

    for (int i = 0; i < teks.size(); i++) {
        teks[i] = tolower(teks[i]);
    }

    cout << "Huruf kecil: " << teks << endl;

    return 0;
}
