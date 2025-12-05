#include "Vol.h"
#include <iostream>

using namespace std;

Vol::Vol(int id, string tipus, int hores, int minuts) : id(id), tipus(tipus), hores(hores), minuts(minuts)
{

}

void Vol::imprimir_vol() const
{
    cout << id << tipus << hores << minuts << endl;
}