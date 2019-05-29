#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap = new QPixmap(200, 200);
    pixmap->fill();

    pen = new QPen(QColor("black"));

    ui->label->setPixmap(*pixmap);

    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete ui;
    for(Figure * s:shapes)
        delete s;
}

void MainWindow::draw_circle(QPainter * painter)
{
    shapes.push_back(new Circle("red",rand() % 100,rand() % 500,rand() % 400));
   /* for(Figure * s:shapes)
    {
        s->draw(painter);
    }*/

}

void MainWindow::on_P_Circle_clicked()
{
    pixmap->fill();

    draw_circle(painter);

    ui->label->setPixmap(*pixmap);
}

void MainWindow::draw_square(QPainter * painter)
{
    shapes.push_back(new Square("yellow",rand() % 100,rand() % 400,rand() % 400));
    /*for(Figure * s:shapes)
        s->draw(painter);*/
}
void MainWindow::on_P_Square_clicked()
{
    pixmap->fill();

    draw_square(painter);

    ui->label->setPixmap(*pixmap);
}

void MainWindow::draw_triangle(QPainter * painter)
{
    shapes.push_back(new Triangle(rand() % 100,rand() % 400,rand() % 400));
    /*for(Figure * s:shapes)
        s->draw(painter);*/
}

void MainWindow::on_P_Triangle_clicked()
{
    pixmap->fill();

    draw_triangle(painter);

    ui->label->setPixmap(*pixmap);
}

void MainWindow::on_Draw_all_clicked()
{
    pixmap->fill();
     for(Figure * s:shapes)
     {
         s->draw(painter);
     }
     ui->label->setPixmap(*pixmap);

}
