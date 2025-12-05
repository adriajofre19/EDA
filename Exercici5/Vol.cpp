#include "Vol.h"
#include <iostream>

using namespace std;

Vol::Vol(int id, string tipus, int hores, int minuts) : id(id), tipus(tipus), hores(hores), minuts(minuts)
{

}

void Vol::imprimir_vol() const 
{
    cout << "Vol: " << id << "\t" << tipus << " ";
    if(hores<10) cout << "0" << hores;
    else cout << hores;
    cout << ":";
    if(minuts == 0) cout << "00" << endl;
    else cout << minuts << endl;
}