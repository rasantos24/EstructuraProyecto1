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

/*    QGraphicsView* visor = new QGraphicsView();
    QGraphicsScene* escena = new QGraphicsScene();

    QImage* img = new QImage();
    img->load("cosa.jpg");
    visor->scene()->addPixmap(QPixmap::fromImage(*img));

    visor->setScene(escena);
    visor->scene()->addLine(50,50,80,80);
*/


}

void Tamagotchi::on_ComerB_clicked()
{
    ui->BarraComida->setValue(ui->BarraComida->value()+2);
}

void Tamagotchi::on_DormirB_clicked()
{
    ui->BarraDormir->setValue(ui->BarraDormir->value()+2);
}

void Tamagotchi::on_HigieneB_clicked()
{
    ui->BarraHigiene->setValue(ui->BarraHigiene->value()+2);
}

void Tamagotchi::on_SaludB_clicked()
{
    ui->BarraSalud->setValue(ui->BarraSalud->value()+2);
}
