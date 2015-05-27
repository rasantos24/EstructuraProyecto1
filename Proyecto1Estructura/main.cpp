#include "tamagotchi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tamagotchi w;
    w.show();

    return a.exec();
}
