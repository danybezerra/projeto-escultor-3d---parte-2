#ifndef INTERPRETADOR_H
#define  INTERPRETADOR_H
#include  "sculptor.h"
#include  "figurageometrica.h"

class  Interpretador : public FiguraGeometrica {
    protected:
    int x, y, z = 0 ;

    public:
    Interpretador ();
    std::vector<FiguraGeometrica*> parse(std::string nome_arquivo);
    int  getDimX ();
    int  getDimY ();
    int  getDimZ ();

};
#endif
