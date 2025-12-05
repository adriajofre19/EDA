#include "Solucio.h"

class Solucionador
{
private:
    bool _trobada;

    Solucio _solucio, _solucioOpt;

    void Backtraking_Totes(const Solucio& solucio);

    void Backtraking_Una(const Solucio& solucio);

    void Backtraking_Millor(const Solucio& solucio);

public:
    Solucionador(int tipus);

    Solucio obtenirSolucio() const;

    bool solucionar(const Solucio &inicial);
};
