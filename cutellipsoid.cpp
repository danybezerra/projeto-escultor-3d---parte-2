#include "sculptor.h"
#include "figurageometrica.h"
#include "cutellipsoid.h"

cutEllipsoid::cutEllipsoid(int x, int rx, int y, int ry, int z, int rz){
    this->x=x;
    this->rx=rx;
    this->y=y;
    this->ry=ry;
    this->z=z;
    this->rz=rz;
};

void cutEllipsoid::draw(sculptor&t){
    t.cutEllipsoid(this->x,this->rx, this->y, this->ry, this->z, this->rz);
};
