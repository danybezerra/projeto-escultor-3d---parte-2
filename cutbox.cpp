#include "sculptor.h"
#include "figurageometrica.h"
#include "cutbox.h"

cutBox::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    x0=x0;
    x1=x1;
    y0=y0;
    y1=y1;
    z0=z0;
    z1=z1;
};

void cutBox::draw(sculptor &t){
    t.cutBox(x0, x1, y0, y1, z0, z1);
};
