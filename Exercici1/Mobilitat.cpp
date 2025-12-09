#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "eines.h"
#include "Mobilitat.h"

Mobilitat::Mobilitat()
{

}

int Mobilitat::llegirDades(const string& path) 
{
    ifstream f;
    string linia;
    vector<string> items;
    f.open(path);
    int n_files = 0;
    if(!f.fail())
    {
        getline(f, linia);
        getline(f, linia);
        while (!f.eof()) {
         items = tokens(linia, ';', true);
         
         int id = stoi(items[0]);
         int any = stoi(items[1]);
         int ordre = stoi(items[2]);
         string tipusDesplacament = items[3];
         int horaIn = stoi(items[4]);
         n_files ++;
         getline(f, linia);
      }
    }
    return n_files;
}