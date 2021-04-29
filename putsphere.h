#ifndef PUTSPHERE_H
#define  PUTSPHERE_H
#include  "sculptor.h"
#include  "figurageometrica.h"

class putSphere : public FiguraGeometrica {
    int x, y, z, radius;
    float r,g,b,a;

    public:
    putSphere ( int x, int y, int z, int radius, float r, float g, float b, float a);
    void  draw(sculptor &t);
};

#endif

