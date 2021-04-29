#ifndef CUTSPHERE_H
#define  CUTSPHERE_H
#include  "sculptor.h"
#include  "figurageometrica.h"

class  cutSphere : public  FiguraGeometrica {
    int x, y, z, radius;

    public:
    cutSphere ( int x, int y, int z, int radius);
    void  draw (sculptor & t);
};

#endif
