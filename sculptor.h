#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>
#include <vector>
struct  voxel {
    float r, g, b;
    float a;
    bool isOn;
};
class sculptor{
    private:
        voxel *** v;
        float lado;
        float delta;
        float r, g, b, a;
        int nx, ny, nz;
        int i, j, k, x, y, z;
    public:
        sculptor(int _nx = 1, int _ny=1, int _nz=1);
        ~sculptor();
        void alocaRecursos();
        void liberaRecursos();
        void setColor(float r, float g, float b, float a);
        void putVoxel (int x0, int y0, int z0);
        void cutVoxel(int x0, int y0, int z0);
        void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
        void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        void putSphere (int x0, int y0, int z0, int r);
        void cutSphere(int x0, int y0, int z0, int r);
        void putEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);
        void cutEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);
        void clear (void);
        void writeOFF (char* f);
};
struct  ponto {
    float xp, yp, zp;
};

struct  face {
    float a, p0, p1, p2, p3;
};

#endif
