// Creat per jhg
// EDA (laboratori): Exercici 6
// Curs 2025/26

#include <iostream>
#include <iomanip>
#include <random>
#include <chrono>
#include <vector>
#include <algorithm>

const int MIN_COORDINATE_VAL = 1;
const int MAX_COORDINATE_VAL = 200;

const int MIN_ALTURA = 0;
const int MAX_ALTURA = 50;

const int COMPLEXITY_MIN = 3;
const int COMPLEXITY_MAX = 16;

struct Muntanya {
   Muntanya():_ini(1),_fi(2),_alt(0){};
   Muntanya(double x1, double x2, int altura);
   bool operator<(const Muntanya& alt) const;

   int _ini;
   int _fi;
   int _alt;
};

using namespace std;

// Genera n punts de manera aleatoria i els guarda en el vector
void generarDades(vector<Muntanya>& v, unsigned int n);
// Comparacio (temps) de l'execució dels dos algoritmes a mesura que
// s'incrementa la mida del vector aleatori
void estudiComplexitat();
// Comparacio (temps i resultat) de l'execució dels dos algoritmes
// amb un vector aleatori de mida n
void compararAlgoritmes(int n);

// Mètode que calcula amb força bruta el perfil entre
// qualsevol parell d'elements a l'interval [esq,dreta) del vector.
// Requereix que el vector punts estigui ordenat per la coordenada _ini.
vector<pair<int,int>> solucioBF(const vector<Muntanya>& muntanyes, int esq, int dreta);
// Mètode que implementa DiV (recursivitat) i calcula el perfil entre
// qualsevol parell d'elements a l'interval [esq,dreta) del vector.
// Requereix que el vector punts estigui ordenat per la coordenada _ini.
vector<pair<int,int>> solucioDiVRec(const vector<Muntanya>& punts, int esq, int dreta);



int main (int argc, char **argv){
   cout << argv[1] << endl;
   return(0);
}