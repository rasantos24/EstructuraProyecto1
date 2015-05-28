#include "tamagotchi.h"
#include "ui_tamagotchi.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);

    ui->BarraComida->hide();
    ui->BarraDormir->hide();
    ui->BarraHigiene->hide();
    ui->BarraSalud->hide();
    ui->BarraVida->hide();
    ui->ComerB->hide();
    ui->SaludB->hide();
    ui->DormirB->hide();
    ui->HigieneB->hide();
    ui->CrearTamagotchi->hide();

    desechos = new  MisPilas;
    enfermedades = new MisPilas;
    hambre = new MisPilas;
    sueno = new MisPilas;

    miTime = new QTimer(this);
    otroTime = new QTimer(this);
    connect(miTime, SIGNAL(timeout()), this, SLOT(refrescar_barras()));
}

Tamagotchi::~Tamagotchi()
{
    delete ui;
}

void Tamagotchi::actualizar()
{
    if(ui->BarraVida->value() < 50)
        ui->BarraVida->setStyleSheet(danio);
    else
        ui->BarraVida->setStyleSheet(salvar);

    if(ui->BarraDormir->value() > 50)
        ui->BarraDormir->setStyleSheet(danio);
    else
        ui->BarraDormir->setStyleSheet(salvar);

    if(ui->BarraHigiene->value() > 30)
        ui->BarraHigiene->setStyleSheet(danio);
    else
        ui->BarraHigiene->setStyleSheet(salvar);

    if(ui->BarraComida->value() > 30)
        ui->BarraComida->setStyleSheet(danio);
    else
        ui->BarraComida->setStyleSheet(salvar);

    if(ui->BarraSalud->value() > 30)
        ui->BarraSalud->setStyleSheet(danio);
    else
        ui->BarraSalud->setStyleSheet(salvar);
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
    if(create_window.granja->getPos(buscar(getNombre()))->enfermedad > 0 &&
            create_window.granja->getPos(buscar(getNombre()))->enfermedad <= 100)
    {
        if(enfermedades->getPrimero())
        {
            enfermedades->sacar();
            if(enfermedades->getPrimero())
                create_window.granja->getPos(buscar(getNombre()))->enfermedad = enfermedades->getPrimero()->valor;
            else
                create_window.granja->getPos(buscar(getNombre()))->enfermedad = 0;
        }
    }
    valores(getNombre());
}

int Tamagotchi::buscar(QString name)
{
    for(int x = 0; x<create_window.granja->size; x++)
    {
        if(create_window.granja->getPos(x)->nombre == name)
        {
            posTama = x;
        }
    }
    return posTama;
}

void Tamagotchi::valores(QString name)
{
    ui->BarraVida->setValue(create_window.granja->getPos(buscar(name))->vida);
    ui->BarraHigiene->setValue(create_window.granja->getPos(buscar(name))->desechos);
    ui->BarraSalud->setValue(create_window.granja->getPos(buscar(name))->enfermedad);
    ui->BarraDormir->setValue(create_window.granja->getPos(buscar(name))->sueno);
    ui->BarraComida->setValue(create_window.granja->getPos(buscar(name))->hambre);

    actualizar();
}

QString Tamagotchi::getNombre()
{
    return ui->MisTamas->currentText();
}

void Tamagotchi::pierdeVida()
{
    switch(rand()%4)
        {
            case 0:
                if(create_window.granja->getPos(buscar(getNombre()))->defecar >= 0 &&
                        create_window.granja->getPos(buscar(getNombre()))->defecar < 500)
                {
                    if(desechos->getPrimero())
                    {
                        if(desechos->getPrimero()->valor >= 0)
                        {
                            NodoT* tempo = new NodoT(desechos->getPrimero()->valor+10);
                            desechos->meter(tempo);
                        }
                    }
                    else if(!desechos->getPrimero())
                    {
                        defecar = new NodoT(30);
                        desechos->meter(defecar);
                    }
                    create_window.granja->getPosi(buscar(getNombre()))->defecar = desechos->getPrimero()->valor;
                }
                valores(getNombre());
            break;


            case 1:
                if(create_window.granja->getPos(buscar(getNombre()))->comer >= 0 &&
                        create_window.granja->getPos(buscar(getNombre()))->comer < 500)
                {
                    if(hambre->getPrimero())
                    {
                        if(hambre->getPrimero()->valor >= 0)
                        {
                            NodoT* tempo = new NodoT(hambre->getPrimero()->valor+10);
                            hambre->meter(tempo);
                        }
                    }
                    else if(!hambre->getPrimero())
                    {
                        comer = new NodoT(30);
                        hambre->meter(comer);
                    }
                    create_window.granja->getPos(buscar(getNombre()))->comer = hambre->getPrimero()->valor;
                }
                valores(getNombre());
            break;

            case 2:
                if(create_window.granja->getPos(buscar(getNombre()))->sanar >= 0 &&
                        create_window.granja->getPos(buscar(getNombre()))->sanar < 100)
                {
                    if(enfermedades->getPrimero())
                    {
                        if(enfermedades->getPrimero()->valor >= 0)
                        {
                            NodoT* tempo = new NodoT(enfermedades->getPrimero()->valor+10);
                            enfermedades->meter(tempo);
                        }
                    }
                    else if(!enfermedades->getPrimero())
                    {
                        sanar = new NodoT(10);
                        enfermedades->meter(sanar);
                    }
                    create_window.granja->getPos(buscar(getNombre()))->sanar = enfermedades->getPrimero()->valor;
                }
                valores(getNombre());
            break;

            case 3:
                if(create_window.granja->getPos(buscar(getNombre()))->dormir >= 0 &&
                        create_window.granja->getPos(buscar(getNombre()))->dormir < 100)
                {
                    if(sueno->getPrimero())
                    {
                        if(sueno->getPrimero()->valor >= 0)
                        {
                            NodoT* tempo = new NodoT(sueno->getPrimero()->valor+10);
                            sueno->meter(tempo);
                        }
                    }
                    else if(!sueno->getPrimero())
                    {
                        dormir = new NodoT(10);
                        sueno->meter(dormir);
                    }
                    create_window.granja->getPos(buscar(getNombre()))->sueno = sueno->getPrimero()->valor;
                }
                valores(getNombre());
            break;
        }
}

void Tamagotchi::bajarVida()
{
    int dano = ui->BarraComida->value() + ui->BarraDormir->value() + ui->BarraHigiene->value() + ui->BarraSalud->value();
    create_window.granja->getPos(buscar(getNombre()))->vida = 100 - (dano * 0.25);
    valores(getNombre());
}
