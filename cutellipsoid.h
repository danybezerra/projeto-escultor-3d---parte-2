#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include  "sculptor.h"
#include "figurageometrica.h"

class  cutEllipsoid : public  FiguraGeometrica {
    int x, rx, y, ry, z, rz;

    public:
    cutEllipsoid ( int x, int xr, int y, int yr, int z, int zr);
    void  draw (sculptor & t);
};


#endif
