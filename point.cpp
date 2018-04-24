#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

Point::Point()
{
    x=0;
    y=0;
}

Point::Point(float _x, float _y)
{
    x=_x;
    y=_y;
}

void Point::setX(float _x){
    x = _x;
}
void Point::setY(float _y){
    y =_y;
}
void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
}

float Point::getX(void){
    return x;
}

float Point::getY(void){
    return y;
}

Point Point::add(Point p1){
    Point ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;
    return ret;
}

Point Point::sub(Point p1){
    Point ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;
    return ret;
}

float Point::norma(void){
    return sqrt(x*x+y*y);
}

void Point::translada(float a, float b){
    x = x+a;
    y = y+b;
}

void Point::imprime(void){
    cout<<"("<<x<<","<<y<<")";
}
