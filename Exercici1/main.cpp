#include <iostream>
#include "Mobilitat.h"

using namespace std;

void llegir_dades() {
    string fitxer;
    cout << "Escriu el nom del fitxer: " << endl;
    cin >> fitxer;
    Mobilitat m;
    int files = m.llegirDades(fitxer);
    cout << "********************" << endl;
    cout << "* 01: Llegir dades *" << endl;
    cout << "********************" << endl;
    cout << "Numero de linies: " << files << endl;

}

int main() {
    int res;

    cin >> res;

    while (res != 0)
    {
        if(res == 1) llegir_dades();

        cin >> res;
    }
    
    return 0;
}