#ifndef FIGURE_H
#define FIGURE_H


#include <iostream>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>

#include <QVector>
#include <QRectF>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QString>


using namespace std;

class Figure
{
    protected:
    string color;

    public:
    Figure(string p_color = "black");
    virtual ~Figure()=0;
    virtual void draw(QPainter * painter) = 0;

};


#endif // FIGURE_H
