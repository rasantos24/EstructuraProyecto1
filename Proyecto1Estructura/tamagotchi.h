#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>

#include <QMainWindow>

namespace Ui {
class Tamagotchi;
}

class Tamagotchi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tamagotchi(QWidget *parent = 0);
    ~Tamagotchi();

private:
    Ui::Tamagotchi *ui;


};

#endif // TAMAGOTCHI_H
