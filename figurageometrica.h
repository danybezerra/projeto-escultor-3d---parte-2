#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include  "sculptor.h"
#include  <string>
#include  <sstream>
#include  <fstream>
#include  <iostream>

class  FiguraGeometrica {
protected:
    float r,g,b,a;
    public:
        FiguraGometrica();
        virtual  ~ FiguraGeometrica () {};
        virtual void draw(sculptor &t)=0;
};

#endif
