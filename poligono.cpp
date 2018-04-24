#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono(void)
{
    npontos = 0;
}

int Poligono::getNumPontos(void){
    return npontos;
}

void Poligono::addponto(float _x, float _y){
    poligono[npontos].setXY(_x,_y);
    npontos++;
}

float Poligono::area(void){
    int i;
    float soma, sub;

    soma = poligono[npontos-1].getX()*poligono[0].getY();
    sub = poligono[npontos-1].getY()*poligono[0].getX();

    for(i=0;i<npontos-1;i++){
        soma += poligono[i].getX()*poligono[i+1].getY();
        sub += poligono[i].getY()*poligono[i+1].getX();
    }
    return (abs(soma-sub)/2);
}

void Poligono::translada(float a, float b){
    int i;
    for(i=0;i<npontos;i++){
        poligono[i].translada(a,b);
    }

}

void Poligono::rotaciona(Point p1, float ang)
{
    float x , y, x1, y1;
    int i;

    for(i=0;i<npontos;i++){
        x = p1.getX();
        y = p1.getY();

        poligono[i].translada(x*(-1),y*(-1));

        x1 = poligono[i].getX()*cos(ang) - poligono[i].getY()*sin(ang);
        y1 = poligono[i].getY()*cos(ang) + poligono[i].getX()*sin(ang);

        poligono[i].setXY(x1,y1);

        poligono[i].translada(x,y);

    }
}

void Poligono::imprime(void){
    int i;

    if(npontos == 0){
        cout<< "Nao ha vertices" <<endl;
    }
    for(i=0;i<npontos;i++){
        poligono[i].imprime();

        if(i<npontos-1)
            cout << " -> ";
        else
            cout << endl;
    }
}

