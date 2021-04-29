#include "putvoxel.h"
#include  "sculptor.h"
#include  "figurageometrica.h"

putVoxel::putVoxel(int x, int y, int z, float r, float g, float b, float a){
    this->x=x;
    this->y=y;
    this->z=z;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}

void putVoxel::draw(sculptor&t){
    t.setColor(this->r,this->g,this->b,this->a);
    t.putVoxel(this->x,this->y,this->z);
};
