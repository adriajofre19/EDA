#include "Candidats.h"

class Solucio
{
private:
    /* data */
public:
    Solucio();

    Candidats<int> incialitzarCandidats() const;

    bool acceptable(const Candidats<int>& candidats) const;

    void anotar(const Candidats<int>& candidats);

    void desanotar(const Candidats<int>& candidats);

    bool completa() const;

    bool potSerMillor(const Solucio& solucioOpt, const Candidats<int>& candidats) const;

    bool esMillor(const Solucio& solucioOpt) const;
};