#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <QTimer>
#include <QMainWindow>
#include "nodot.h"
#include "mtamagotchi.h"
#include "tamagotchi.h"
#include "migranja.h"
#include "miscolas.h"
#include "mispilas.h"

namespace Ui {
class Tamagotchi;
}

class Tamagotchi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tamagotchi(QWidget *parent = 0);
    ~Tamagotchi();
    QTimer* time;

private slots:
    void on_ComerB_clicked();

    void on_DormirB_clicked();

    void on_HigieneB_clicked();

    void on_SaludB_clicked();

private:
    Ui::Tamagotchi *ui;

    MisPilas* sueno;
    MisPilas* desechos;
    MisPilas* hambre;
    MisPilas* enfermedades;

    NodoT* dormir;
    NodoT* defecar;
    NodoT* comer;
    NodoT* sanar;

    MiGranja* tamas;

    QString crear;
    QString salvar;
    QString danio;

    int posTama;
    int valor;

};

#endif // TAMAGOTCHI_H
