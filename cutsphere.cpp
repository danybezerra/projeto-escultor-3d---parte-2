#include "cutsphere.h"
#include  "sculptor.h"
#include  "figurageometrica.h"

cutSphere::cutSphere(int x, int y, int z, int radius){
    this->x=x;
    this->y=y;
    this->z=z;
    this->radius=radius;
};

void cutSphere::draw(sculptor&t){
    t.cutSphere(this->x,this->y,this->z,this->radius);
};
