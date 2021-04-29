#ifndef CUTVOXEL_H
#define  CUTVOXEL_H
#include  "sculptor.h"
#include  "figurageometrica.h"

class  cutVoxel : public  FiguraGeometrica {
    int x, y, z;

    public:
    cutVoxel ( int x, int y, int z);
    void  draw (sculptor&t);
};

#endif
