#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Poligono class
 */
class Poligono
{
    int npontos;
    Point poligono[100];

public:
    Poligono();
    void addponto(float _x, float _y);
    int getNumPontos(void);
    void imprime(void);
    float area(void);
    void translada(float a, float b);
    void rotaciona(Point p1, float ang);
};

#endif // POLIGONO_H
