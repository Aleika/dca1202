#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

void TestePoint(void);
void TestePoligono(void);
void TesteRetangulo(void);
Point CM(float x, float y, float largura, float altura);

int main()
{
    Retangulo ret(0,0,4,3);
    Point cm;
    ret.imprime();

    cm = CM(0,0,3,4);
    cm.imprime();

    cout << "Area: " << ret.area()<<endl;

    cout << "Transladar em (-3,4) ficando: ";
    ret.translada(-3,4);
    ret.imprime();

    cout << "Area com translacao: " << ret.area()<<endl;

    cout<< "Rotacao "<<endl;
    ret.rotaciona(cm,M_PI/6);
    ret.imprime();

}

void TestePoint(void){

    Point p1(2,5), p2, p3;

    p2.setX(1);
    p2.setY(1);

    cout << "Coordenadas ponto 3: ";
    p3.imprime();

    cout<< endl<< "Coordenada x do ponto 1: "<< p1.getX()<<endl;
    cout<< "Coordenada y do ponto 1: "<< p1.getY() <<endl;

    cout << "Teste soma de pontos:"<<endl;
    p3 = p2.add(p1);
    p3.imprime();
    cout << endl;

    cout << "Teste subtracao de pontos:"<<endl;
    p3 = p2.sub(p1);
    p3.imprime();
    cout << endl;

    cout<< "Norma  do ponto 2: " << p2.norma()<<endl;

    cout << "Transladar o ponto p1 = ";
    p1.imprime();
    cout << " em 5 unidades nas coordenadas x e y"<<endl;
    cout << "Agora, p1 = ";
    p1.translada(5,5);
    p1.imprime();
    cout << endl;
}

void TestePoligono(void){
    Poligono poli;
    Point p1;

    //Inserindo os pontos no poligono
    poli.addponto(2,3);
    poli.addponto(5,5);
    poli.addponto(8,3);
    poli.addponto(7,1);

    cout << "Quantidade de Vertices: "<< poli.getNumPontos() <<endl<<endl;
    cout << "Area do poligono: " << poli.area() << endl<<endl;
    cout << "Tranladar o poligono ";
    poli.imprime();
    cout << "em 1 na coordernada x e 2 na coordenada y " <<endl;
    cout << "Poligono com translacao: ";
    poli.translada(1,2);
    poli.imprime();

    cout << endl;

    cout << "Rotacao do poligono "<<endl;
    cout << "Pontos iniciais"<<endl;
    poli.imprime();
    cout  << "Apos a rotacao "<<endl;
    poli.rotaciona(p1,M_PI);
    poli.imprime();

}

void TesteRetangulo(){

    Retangulo ret(5,5,5,5);
    Point p1;

    cout << "Quantidade de Vertices: "<< ret.getNumPontos() <<endl<<endl;
    cout << "Area do retangulo: " << ret.area() << endl<<endl;
    cout << "Tranladar o retangulo ";
    ret.imprime();
    cout << "em 1 na coordernada x e 2 na coordenada y " <<endl;
    cout << "retangulo com translacao: ";
    ret.translada(1,2);
    ret.imprime();

    cout << endl;

    cout << "Rotacao do retangulo "<<endl;
    cout << "Pontos iniciais"<<endl;
    ret.imprime();
    cout  << "Apos a rotacao "<<endl;
    ret.rotaciona(p1,M_PI);
    ret.imprime();
}

Point CM(float x, float y, float largura, float altura){
    Point cm(0,0);

    float coord_x, coord_y;

    coord_y = (2*x-altura)/2;
    coord_x = (2*y+largura)/2;

    cm.setXY(coord_x,coord_y);
    return cm;
}
