#ifndef CANDIDATS_H
#define CANDIDATS_H

#include <list>

template <typename T>
class Candidats {
public:
    // Constructor amb un llistat d'elements
    Candidats(const std::list<T>& elems)
        : elements(elems), it(elements.begin()) {}

    // Retorna l'element actual
    T actual() const {
        return *it;
    }

    // Diu si s'ha arribat a l'últim candidat
    bool fi() const {
        return it == elements.end();
    }

    // Passa al següent candidat
    void seguent() {
        if (it != elements.end()) ++it;
    }

private:
    std::list<T> elements;
    typename std::list<T>::iterator it;
};

#endif
