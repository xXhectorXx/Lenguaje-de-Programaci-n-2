#include "triangle.h"

Triangle::Triangle(int pheight, int pposx, int pposy)
{
    height = pheight;
    posx = pposx;
    posy = pposy;
}
Triangle::~Triangle()
{

}

void Triangle::draw(QPainter * painter)
{

    painter->drawLine(posx,posy,posx-height/2, posy+height);
    painter->drawLine(posx-height/2, posy+height,posx+height/2, posy+height);
    painter->drawLine(posx+height/2, posy+height,posx,posy);
    cout << "Se triangulo h " << height << "de coordenadas "<< posx << "," << posy << endl << endl;

}
