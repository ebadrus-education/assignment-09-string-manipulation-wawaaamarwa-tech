#include <iostream>
#include <string>
#include <cctype>
using namespace std; 

int main() {
    string teks = "Bakso enakk loo!!";

    for (int i = 0; i < teks.length(); i++) {
        teks[i] = toupper(teks[i]);
    }

    cout << "Huruf besar: " << teks << endl;

    return 0;
}
