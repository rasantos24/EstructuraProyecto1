/********************************************************************************
** Form generated from reading UI file 'tamagotchi.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAMAGOTCHI_H
#define UI_TAMAGOTCHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tamagotchi
{
public:
    QAction *actionKim;
    QWidget *centralWidget;
    QPushButton *ComerB;
    QPushButton *DormirB;
    QPushButton *HigieneB;
    QPushButton *SaludB;
    QProgressBar *BarraComida;
    QProgressBar *BarraDormir;
    QProgressBar *BarraHigiene;
    QProgressBar *BarraSalud;
    QGraphicsView *Figura;
    QProgressBar *BarraVida;
    QLabel *Vida;
    QPushButton *CrearTamagotchi;
    QLabel *Titulo;
    QLineEdit *NombreTamagotchi;
    QLabel *Nombre;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tamagotchi)
    {
        if (Tamagotchi->objectName().isEmpty())
            Tamagotchi->setObjectName(QStringLiteral("Tamagotchi"));
        Tamagotchi->resize(468, 485);
        actionKim = new QAction(Tamagotchi);
        actionKim->setObjectName(QStringLiteral("actionKim"));
        centralWidget = new QWidget(Tamagotchi);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ComerB = new QPushButton(centralWidget);
        ComerB->setObjectName(QStringLiteral("ComerB"));
        ComerB->setGeometry(QRect(320, 210, 75, 23));
        DormirB = new QPushButton(centralWidget);
        DormirB->setObjectName(QStringLiteral("DormirB"));
        DormirB->setGeometry(QRect(320, 270, 75, 23));
        HigieneB = new QPushButton(centralWidget);
        HigieneB->setObjectName(QStringLiteral("HigieneB"));
        HigieneB->setGeometry(QRect(320, 330, 75, 23));
        SaludB = new QPushButton(centralWidget);
        SaludB->setObjectName(QStringLiteral("SaludB"));
        SaludB->setGeometry(QRect(320, 390, 75, 23));
        BarraComida = new QProgressBar(centralWidget);
        BarraComida->setObjectName(QStringLiteral("BarraComida"));
        BarraComida->setGeometry(QRect(320, 180, 118, 23));
        BarraComida->setValue(100);
        BarraComida->setTextVisible(false);
        BarraDormir = new QProgressBar(centralWidget);
        BarraDormir->setObjectName(QStringLiteral("BarraDormir"));
        BarraDormir->setGeometry(QRect(320, 240, 118, 23));
        BarraDormir->setValue(100);
        BarraDormir->setTextVisible(false);
        BarraHigiene = new QProgressBar(centralWidget);
        BarraHigiene->setObjectName(QStringLiteral("BarraHigiene"));
        BarraHigiene->setGeometry(QRect(320, 300, 118, 23));
        BarraHigiene->setValue(100);
        BarraHigiene->setTextVisible(false);
        BarraSalud = new QProgressBar(centralWidget);
        BarraSalud->setObjectName(QStringLiteral("BarraSalud"));
        BarraSalud->setGeometry(QRect(320, 360, 118, 23));
        BarraSalud->setValue(100);
        BarraSalud->setTextVisible(false);
        Figura = new QGraphicsView(centralWidget);
        Figura->setObjectName(QStringLiteral("Figura"));
        Figura->setGeometry(QRect(10, 180, 291, 241));
        BarraVida = new QProgressBar(centralWidget);
        BarraVida->setObjectName(QStringLiteral("BarraVida"));
        BarraVida->setGeometry(QRect(50, 130, 391, 23));
        BarraVida->setValue(100);
        BarraVida->setTextVisible(false);
        Vida = new QLabel(centralWidget);
        Vida->setObjectName(QStringLiteral("Vida"));
        Vida->setGeometry(QRect(20, 130, 31, 16));
        CrearTamagotchi = new QPushButton(centralWidget);
        CrearTamagotchi->setObjectName(QStringLiteral("CrearTamagotchi"));
        CrearTamagotchi->setGeometry(QRect(190, 50, 111, 23));
        Titulo = new QLabel(centralWidget);
        Titulo->setObjectName(QStringLiteral("Titulo"));
        Titulo->setGeometry(QRect(170, 10, 71, 16));
        NombreTamagotchi = new QLineEdit(centralWidget);
        NombreTamagotchi->setObjectName(QStringLiteral("NombreTamagotchi"));
        NombreTamagotchi->setGeometry(QRect(70, 50, 113, 20));
        Nombre = new QLabel(centralWidget);
        Nombre->setObjectName(QStringLiteral("Nombre"));
        Nombre->setGeometry(QRect(20, 50, 47, 13));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(-220, 60, 69, 22));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 90, 191, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 91, 16));
        Tamagotchi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tamagotchi);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 468, 21));
        Tamagotchi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Tamagotchi);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Tamagotchi->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Tamagotchi);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Tamagotchi->setStatusBar(statusBar);

        retranslateUi(Tamagotchi);

        QMetaObject::connectSlotsByName(Tamagotchi);
    } // setupUi

    void retranslateUi(QMainWindow *Tamagotchi)
    {
        Tamagotchi->setWindowTitle(QApplication::translate("Tamagotchi", "Tamagotchi", 0));
        actionKim->setText(QApplication::translate("Tamagotchi", "kim", 0));
        ComerB->setText(QApplication::translate("Tamagotchi", "Comer", 0));
        DormirB->setText(QApplication::translate("Tamagotchi", "Dormir", 0));
        HigieneB->setText(QApplication::translate("Tamagotchi", "Higiene", 0));
        SaludB->setText(QApplication::translate("Tamagotchi", "Salud", 0));
        Vida->setText(QApplication::translate("Tamagotchi", "Vida:", 0));
        CrearTamagotchi->setText(QApplication::translate("Tamagotchi", "Crear Tamagotchi", 0));
        Titulo->setText(QApplication::translate("Tamagotchi", "Tamagotchi RS", 0));
        Nombre->setText(QApplication::translate("Tamagotchi", "Nombre:", 0));
        label->setText(QApplication::translate("Tamagotchi", "Elegir Tamagotchi:", 0));
    } // retranslateUi

};

namespace Ui {
    class Tamagotchi: public Ui_Tamagotchi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAMAGOTCHI_H
