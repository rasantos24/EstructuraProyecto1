#include "tamagotchi.h"
#include "ui_tamagotchi.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);
}

Tamagotchi::~Tamagotchi()
{
    delete ui;

    QGraphicsView* visor = new QGraphicsView();
    QGraphicsScene* escena = new QGraphicsScene();

    QImage * img = new QImage();
    img->load("cosa.jpg");
    visor->scene()->addPixmap(QPixmap::fromImage(*img));

    visor->setScene(escena);
    visor->scene()->addLine(50,50,80,80);
}
