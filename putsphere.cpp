#include "putsphere.h"
#include  "sculptor.h"
#include  "figurageometrica.h"

putSphere::putSphere(int x, int y, int z, int radius, float r, float g, float b, float a){
    this->x=x;
    this->y=y;
    this->z=z;
    this->radius=radius;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
};

void putSphere::draw(sculptor&t){
    t.setColor(this->r,this->g,this->b,this->a);
    t.putSphere(this->x,this->y,this->z,this->radius);
};

