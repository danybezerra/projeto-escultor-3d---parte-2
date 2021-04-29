#include "sculptor.h"
#include "figurageometrica.h"
#include "cutvoxel.h"

cutVoxel::cutVoxel(int x,int y , int z){
    this->x=x;
    this->y=y;
    this->z=z;
};

void cutVoxel::draw(sculptor &t){
    t.cutVoxel(this->x, this->y, this->z);
}
