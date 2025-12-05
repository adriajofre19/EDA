#include <iostream>
#include "eines.h"
#include "Vol.h"
#include <vector>
#include <fstream>
#include <list>
#include "Candidats.h"

using namespace std;

void mostrarSeparacio()
{
    cout << "*************************" << endl;
}

void mostrarAjuda()
{
    cout << "Us: ./e5 [-h] | [-m] [-r <int>] [-i <int>] fitxer\n\n"
         << "Opcions:\n"
         << "-h, --help   Mostra aquest missatge i surt\n"
         << "-m           Cerca la solucio que minimitza el nombre de portes\n"
         << "-r <int>     Nombre de portes regionals (default 3)\n"
         << "-i <int>     Nombre de portes internacionals (default 2)\n\n"
         << "fitxer       Fitxer de text amb els vols\n";
}

void llegir_dades(vector<Vol>& vols, string fitxer)
{
    ifstream f;
    string linia;
    vector<string> items;
    f.open(fitxer);
    if(!f.fail())
    {
        getline(f,linia);
        getline(f,linia);
        while (!f.eof())
        {
            items = tokens(linia, '\t', false);
            
            int id = stoi(items[0]);
            string tipus = items[1];
            int hores = stoi(items[2].substr(0, 2));
            int minuts = stoi(items[2].substr(3,2));
            

            Vol nou(id, tipus, hores, minuts);

            vols.push_back(nou);
            
            getline(f, linia);
        }
        
    }
}

int main(int argn, char** argv) 
{
    int i = 1, val_opt_t;
    bool error = false, opcio_t = false, opcio_p =  false, opcio_m = false;
    string fitxer;
    vector<Vol> vols;

    while(!error and i < argn)
    {
        string par = argv[i];

        if(par == "-h" or par == "--help") 
        {
            mostrarAjuda();
            return 0;
        }
        else if(par == "-m")
        {
            opcio_m = true;
            fitxer = string(argv[++i]);
            cout << "OPT -m with" << fitxer <<  endl;
            return 0;
        }
        else 
        {
            fitxer = par;
            llegir_dades(vols, fitxer);


            cout << "==> " << vols.size() << " vols llegits." << endl;
            cout << endl;
            mostrarSeparacio();

                for(int i = 0; i < vols.size(); i++)
                {
                    vols[i].imprimir_vol();
                    
                }

            mostrarSeparacio();

            list<int> nums = {1,2,3,4};

            Candidats<int> cand(nums);
            

            cout << "Candidats: { ";
            while (!cand.fi())
            {
                cout << cand.actual() << ", ";
                cand.seguent();
            }
            cout << "}";
            return 0;
        }
    }
}