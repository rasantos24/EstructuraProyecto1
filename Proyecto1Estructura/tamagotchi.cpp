#include "tamagotchi.h"
#include "ui_tamagotchi.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);

    desechos = new  MisPilas;
    enfermedades = new MisPilas;
    hambre = new MisPilas;
    sueno = new MisPilas;

    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(refrescar_barras()));
}

Tamagotchi::~Tamagotchi()
{
    delete ui;
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
