#include "interpretador.h"
#include "figurageometrica.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

Interpretador::Interpretador(){

}
std::vector<FiguraGeometrica*> Interpretador::parse(std::string endereco_arquivo){
std::vector<FiguraGeometrica*> figs;

    std::ifstream fin;
    std::string s, token;
    std::stringstream ss;


    fin.open(file_name.c_str());

    while(fin.good()){
        std::getline(fin,s);
        if(fin.good()){
            ss.clear();
            ss.str(s);
            ss >> token;
            if(ss.good()){
                if (token.compare("dim") == 0){
                    ss >> x >> y >> z;
                }
                else if(token.compare("putvoxel")==0){
                    int x,y,z;
                    float r,g,b,a;
                    ss >> x >> y >> z >> r >> g >> b >> a;
                    figs.push_back(new putVoxel(x, y, z, r, g, b, a));
                }
                else if(token.compare("cutvoxel")==0){
                    int x,y,z;
                    ss >> x >> y >> z;
                    figs.push_back(new cutVoxel(x, y, z));
                }
                else if(token.compare("putbox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    float r, g, b, a;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new putBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(token.compare("cutbox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new cutBox(x0, x1, y0, y1, z0, z1));
                }
                else if(token.compare("putsphere")==0){
                    int x, y, z, radius;
                    float r, g, b, a;
                    ss >> x >> y >> z >> radius >> r >> g >> b >> a;
                    figs.push_back(new putSphere(x, y, z, radius, r, g, b, a));
                }
                else if(token.compare("cutsphere")==0){
                    int x, y, z, radius;
                    ss >> x >> y >> z >> radius;
                    figs.push_back(new cutSphere(x, y, z, radius));
                }
                else if(token.compare("putellipsoid")==0){
                    int x, xr, y, yr, z, zr;
                    float r, g, b, a;
                    ss >> x >> xr >> y >> yr >> z >> zr >> r >> g >> b >> a;
                    figs.push_back(new putEllipsoid(x, xr, y, yr, z, zr, r, g, b, a));
                }
                else if(token.compare("cutellipsoid")==0){
                    int x, xr, y, yr, z, zr;
                    ss >> x >> xr >> y >> yr >> z >> zr;
                    figs.push_back(new cutEllipsoid(x, xr, y, yr, z, zr));
                }
            }
        }
    }
    return (figs);
};

int Interpretador::getDimX(){
    return x;
};

int Interpretador::getDimY(){
    return y;
};

int Interpretador::getDimZ(){
    return z;
};
