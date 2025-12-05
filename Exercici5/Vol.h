#include <string>
#include <vector>
using namespace std;

class Vol
{
private:
    int id;
    string tipus;
    int hores;
    int minuts;
public:
    Vol(int id, string tipus, int hores, int minuts);
    
    void imprimir_vol() const;
};
