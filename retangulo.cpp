#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(){

}
Retangulo::Retangulo(float x, float y, float largura, float altura){
//    poligono[npontos].setXY(x,y); npontos++;
    addponto(x,y);
    addponto(x,y-altura);
    addponto(x+largura,y-altura);
    addponto(x+largura,y);
}
