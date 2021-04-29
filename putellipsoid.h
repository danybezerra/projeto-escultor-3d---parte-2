#ifndef PUTELLIPSOID_H
#define  PUTELLIPSOID_H
#include  "sculptor.h"
#include  "figurageometrica.h"

class  putEllipsoid : public  FiguraGeometrica {
    int x, rx, y, ry, z, rz;

    public:
    putEllipsoid ( int x, int xr, int y, int yr, int z, int zr, float r, float g, float b, float a);
    void  draw(sculptor &t);
};

#endif
