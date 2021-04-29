#include "sculptor.h"
#include "figurageometrica.h"
#include "putellipsoid.h"

putEllipsoid::putEllipsoid(int x, int rx, int y, int ry, int z, int rz, float r, float g, float b, float a){
    this->x=x;
    this->rx=rx;
    this->y=y;
    this->ry=ry;
    this->z=z;
    this->rz=rz;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
};

void putEllipsoid::draw(sculptor&t){
    t.setColor(this->r,this->g,this->b,this->a);
    t.putEllipsoid(this->x,this->rx, this->y, this->ry, this->z, this->rz);
};
