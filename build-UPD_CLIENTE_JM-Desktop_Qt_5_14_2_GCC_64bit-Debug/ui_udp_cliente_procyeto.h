/********************************************************************************
** Form generated from reading UI file 'udp_cliente_procyeto.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_CLIENTE_PROCYETO_H
#define UI_UDP_CLIENTE_PROCYETO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDP_CLIENTE_PROCYETO
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *carnet;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *veli;
    QLabel *vel;
    QLabel *frei;
    QLabel *fre;
    QLabel *volt;
    QLabel *volti;
    QLabel *tem;
    QLabel *temi;
    QLabel *datos_real;
    QLabel *v;
    QLabel *f;
    QLabel *vl;
    QLabel *t;
    QLabel *dvel;
    QLabel *dfre;
    QLabel *dvol;
    QLabel *dtem;
    QLabel *rpm;
    QLabel *hz;
    QLabel *vs;
    QLabel *c;
    QLabel *advertencia;
    QLabel *letrero2;
    QLabel *pv;
    QLabel *pf;
    QLabel *pvl;
    QLabel *pt;
    QLabel *letrero1;
    QLabel *letrero3;
    QLabel *todobien;
    QLabel *std1;
    QLabel *std2;
    QLabel *std3;
    QLabel *std4;
    QTableWidget *tableWidget;
    QLabel *ocultar2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *UDP_CLIENTE_PROCYETO)
    {
        if (UDP_CLIENTE_PROCYETO->objectName().isEmpty())
            UDP_CLIENTE_PROCYETO->setObjectName(QString::fromUtf8("UDP_CLIENTE_PROCYETO"));
        UDP_CLIENTE_PROCYETO->setEnabled(true);
        UDP_CLIENTE_PROCYETO->resize(637, 762);
        UDP_CLIENTE_PROCYETO->setMouseTracking(false);
        UDP_CLIENTE_PROCYETO->setTabletTracking(false);
        UDP_CLIENTE_PROCYETO->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("JM");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        UDP_CLIENTE_PROCYETO->setWindowIcon(icon);
        UDP_CLIENTE_PROCYETO->setAutoFillBackground(false);
        UDP_CLIENTE_PROCYETO->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/IMAGENES/fondo.jpg);"));
        UDP_CLIENTE_PROCYETO->setAnimated(true);
        UDP_CLIENTE_PROCYETO->setDockNestingEnabled(false);
        centralwidget = new QWidget(UDP_CLIENTE_PROCYETO);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 110, 121, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);\n"
"border-image: url(:/new/prefix1/IMAGENES/cuadrado_rojo_400x400.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 40, 81, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(50, 200, 121, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(200, 200, 111, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(350, 200, 91, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(490, 200, 111, 31));
        carnet = new QLineEdit(centralwidget);
        carnet->setObjectName(QString::fromUtf8("carnet"));
        carnet->setGeometry(QRect(280, 70, 81, 31));
        carnet->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/IMAGENES/cuadrado_rojo_400x400.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(40, 150, 571, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans Fallback"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::RightToLeft);
        label_6->setStyleSheet(QString::fromUtf8("background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0))"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 0, 401, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Droid Sans Fallback"));
        font1.setPointSize(27);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::RightToLeft);
        veli = new QLabel(centralwidget);
        veli->setObjectName(QString::fromUtf8("veli"));
        veli->setEnabled(true);
        veli->setGeometry(QRect(40, 230, 71, 31));
        QFont font2;
        font2.setPointSize(16);
        veli->setFont(font2);
        vel = new QLabel(centralwidget);
        vel->setObjectName(QString::fromUtf8("vel"));
        vel->setEnabled(true);
        vel->setGeometry(QRect(120, 230, 51, 31));
        vel->setFont(font2);
        frei = new QLabel(centralwidget);
        frei->setObjectName(QString::fromUtf8("frei"));
        frei->setEnabled(true);
        frei->setGeometry(QRect(210, 230, 65, 31));
        frei->setFont(font2);
        fre = new QLabel(centralwidget);
        fre->setObjectName(QString::fromUtf8("fre"));
        fre->setEnabled(true);
        fre->setGeometry(QRect(260, 230, 51, 31));
        fre->setFont(font2);
        volt = new QLabel(centralwidget);
        volt->setObjectName(QString::fromUtf8("volt"));
        volt->setEnabled(true);
        volt->setGeometry(QRect(410, 230, 51, 31));
        volt->setFont(font2);
        volti = new QLabel(centralwidget);
        volti->setObjectName(QString::fromUtf8("volti"));
        volti->setEnabled(true);
        volti->setGeometry(QRect(340, 230, 65, 31));
        volti->setFont(font2);
        tem = new QLabel(centralwidget);
        tem->setObjectName(QString::fromUtf8("tem"));
        tem->setEnabled(true);
        tem->setGeometry(QRect(550, 230, 51, 31));
        tem->setFont(font2);
        temi = new QLabel(centralwidget);
        temi->setObjectName(QString::fromUtf8("temi"));
        temi->setEnabled(true);
        temi->setGeometry(QRect(500, 230, 51, 31));
        temi->setFont(font2);
        datos_real = new QLabel(centralwidget);
        datos_real->setObjectName(QString::fromUtf8("datos_real"));
        datos_real->setGeometry(QRect(50, 260, 531, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        datos_real->setFont(font3);
        v = new QLabel(centralwidget);
        v->setObjectName(QString::fromUtf8("v"));
        v->setGeometry(QRect(30, 320, 65, 31));
        f = new QLabel(centralwidget);
        f->setObjectName(QString::fromUtf8("f"));
        f->setGeometry(QRect(190, 320, 81, 31));
        vl = new QLabel(centralwidget);
        vl->setObjectName(QString::fromUtf8("vl"));
        vl->setGeometry(QRect(350, 320, 65, 31));
        t = new QLabel(centralwidget);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(490, 320, 81, 31));
        dvel = new QLabel(centralwidget);
        dvel->setObjectName(QString::fromUtf8("dvel"));
        dvel->setGeometry(QRect(30, 360, 71, 31));
        QFont font4;
        font4.setPointSize(13);
        dvel->setFont(font4);
        dfre = new QLabel(centralwidget);
        dfre->setObjectName(QString::fromUtf8("dfre"));
        dfre->setGeometry(QRect(190, 360, 51, 31));
        dfre->setFont(font4);
        dvol = new QLabel(centralwidget);
        dvol->setObjectName(QString::fromUtf8("dvol"));
        dvol->setGeometry(QRect(340, 360, 51, 31));
        dvol->setFont(font4);
        dtem = new QLabel(centralwidget);
        dtem->setObjectName(QString::fromUtf8("dtem"));
        dtem->setGeometry(QRect(490, 360, 61, 31));
        dtem->setFont(font4);
        rpm = new QLabel(centralwidget);
        rpm->setObjectName(QString::fromUtf8("rpm"));
        rpm->setGeometry(QRect(90, 360, 31, 31));
        hz = new QLabel(centralwidget);
        hz->setObjectName(QString::fromUtf8("hz"));
        hz->setGeometry(QRect(250, 360, 31, 31));
        vs = new QLabel(centralwidget);
        vs->setObjectName(QString::fromUtf8("vs"));
        vs->setGeometry(QRect(400, 360, 31, 31));
        c = new QLabel(centralwidget);
        c->setObjectName(QString::fromUtf8("c"));
        c->setGeometry(QRect(570, 360, 31, 31));
        advertencia = new QLabel(centralwidget);
        advertencia->setObjectName(QString::fromUtf8("advertencia"));
        advertencia->setGeometry(QRect(10, 510, 601, 51));
        advertencia->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/IMAGENES/cuadrado_rojo_400x400.png")));
        advertencia->setScaledContents(true);
        letrero2 = new QLabel(centralwidget);
        letrero2->setObjectName(QString::fromUtf8("letrero2"));
        letrero2->setGeometry(QRect(70, 150, 491, 101));
        pv = new QLabel(centralwidget);
        pv->setObjectName(QString::fromUtf8("pv"));
        pv->setGeometry(QRect(30, 430, 81, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Sans"));
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        pv->setFont(font5);
        pv->setAcceptDrops(false);
        pv->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));
        pf = new QLabel(centralwidget);
        pf->setObjectName(QString::fromUtf8("pf"));
        pf->setGeometry(QRect(190, 430, 81, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("DejaVu Sans"));
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        pf->setFont(font6);
        pvl = new QLabel(centralwidget);
        pvl->setObjectName(QString::fromUtf8("pvl"));
        pvl->setGeometry(QRect(340, 430, 81, 31));
        pvl->setFont(font5);
        pt = new QLabel(centralwidget);
        pt->setObjectName(QString::fromUtf8("pt"));
        pt->setGeometry(QRect(490, 430, 81, 31));
        pt->setFont(font5);
        letrero1 = new QLabel(centralwidget);
        letrero1->setObjectName(QString::fromUtf8("letrero1"));
        letrero1->setGeometry(QRect(0, 150, 641, 121));
        letrero3 = new QLabel(centralwidget);
        letrero3->setObjectName(QString::fromUtf8("letrero3"));
        letrero3->setGeometry(QRect(20, 460, 581, 41));
        letrero3->setFont(font6);
        letrero3->setStyleSheet(QString::fromUtf8(""));
        todobien = new QLabel(centralwidget);
        todobien->setObjectName(QString::fromUtf8("todobien"));
        todobien->setGeometry(QRect(10, 510, 601, 51));
        todobien->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/IMAGENES/colores-verde-neon35-76b0ea65041018772e1fa4e25707f5a5-1024-1024.jpg")));
        todobien->setScaledContents(true);
        std1 = new QLabel(centralwidget);
        std1->setObjectName(QString::fromUtf8("std1"));
        std1->setGeometry(QRect(30, 410, 81, 16));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Sans"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        std1->setFont(font7);
        std2 = new QLabel(centralwidget);
        std2->setObjectName(QString::fromUtf8("std2"));
        std2->setGeometry(QRect(190, 410, 81, 16));
        std2->setFont(font7);
        std3 = new QLabel(centralwidget);
        std3->setObjectName(QString::fromUtf8("std3"));
        std3->setGeometry(QRect(340, 410, 81, 16));
        std3->setFont(font7);
        std4 = new QLabel(centralwidget);
        std4->setObjectName(QString::fromUtf8("std4"));
        std4->setGeometry(QRect(480, 410, 81, 16));
        std4->setFont(font7);
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(12, 571, 620, 134));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        ocultar2 = new QLabel(centralwidget);
        ocultar2->setObjectName(QString::fromUtf8("ocultar2"));
        ocultar2->setGeometry(QRect(0, 270, 631, 431));
        UDP_CLIENTE_PROCYETO->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        carnet->raise();
        label_6->raise();
        label_7->raise();
        veli->raise();
        vel->raise();
        frei->raise();
        fre->raise();
        volt->raise();
        volti->raise();
        tem->raise();
        temi->raise();
        datos_real->raise();
        v->raise();
        f->raise();
        vl->raise();
        t->raise();
        dvel->raise();
        dfre->raise();
        dvol->raise();
        dtem->raise();
        rpm->raise();
        hz->raise();
        vs->raise();
        c->raise();
        advertencia->raise();
        letrero2->raise();
        pv->raise();
        pf->raise();
        pvl->raise();
        pt->raise();
        letrero1->raise();
        letrero3->raise();
        todobien->raise();
        std1->raise();
        std2->raise();
        std3->raise();
        std4->raise();
        tableWidget->raise();
        ocultar2->raise();
        pushButton->raise();
        menubar = new QMenuBar(UDP_CLIENTE_PROCYETO);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 637, 20));
        UDP_CLIENTE_PROCYETO->setMenuBar(menubar);
        statusbar = new QStatusBar(UDP_CLIENTE_PROCYETO);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UDP_CLIENTE_PROCYETO->setStatusBar(statusbar);
        toolBar = new QToolBar(UDP_CLIENTE_PROCYETO);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        UDP_CLIENTE_PROCYETO->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(UDP_CLIENTE_PROCYETO);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        UDP_CLIENTE_PROCYETO->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(UDP_CLIENTE_PROCYETO);

        QMetaObject::connectSlotsByName(UDP_CLIENTE_PROCYETO);
    } // setupUi

    void retranslateUi(QMainWindow *UDP_CLIENTE_PROCYETO)
    {
        UDP_CLIENTE_PROCYETO->setWindowTitle(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "UDP_CLIENTE_PROCYETO", nullptr));
#if QT_CONFIG(whatsthis)
        UDP_CLIENTE_PROCYETO->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "INICIAR", nullptr));
        label->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#a40000;\">ID CARN\303\211</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        carnet->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><span style=\" font-size:24pt;\">CONTROL DEL MOTOR</span></p></body></html>", nullptr));
        veli->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><br/></p></body></html>", nullptr));
        vel->setText(QString());
        frei->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><br/></p></body></html>", nullptr));
        fre->setText(QString());
        volt->setText(QString());
        volti->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><br/></p></body></html>", nullptr));
        tem->setText(QString());
        temi->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><br/></p></body></html>", nullptr));
        datos_real->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "INFORMACION DEL MOTOR EN TIEMPO REAL", nullptr));
        v->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "VELOCIDAD", nullptr));
        f->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "FRECUENCIA", nullptr));
        vl->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "VOLTAJE", nullptr));
        t->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "TEMPERATURA", nullptr));
        dvel->setText(QString());
        dfre->setText(QString());
        dvol->setText(QString());
        dtem->setText(QString());
        rpm->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "RPM", nullptr));
        hz->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "Hz", nullptr));
        vs->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "V", nullptr));
        c->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "\302\260C", nullptr));
        advertencia->setText(QString());
        letrero2->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">Por favor ingrese una ID v\303\241lida para</span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">poder generar la informaci\303\263n del</span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">motor.</span></p></body></html>", nullptr));
        pv->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pf->setText(QString());
        pvl->setText(QString());
        pt->setText(QString());
        letrero1->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">El siguiente programa podr\303\241 revisar</span></p><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">la informaci\303\263n en tiempo real del motor para </span></p><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">esto por favoringrese su n\303\272mero de carnet.</span></p></body></html>", nullptr));
        letrero3->setText(QString());
        todobien->setText(QString());
        std1->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" color:#ef2929;\">ESTADO</span></p></body></html>", nullptr));
        std2->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" color:#ef2929;\">ESTADO</span></p></body></html>", nullptr));
        std3->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" color:#ef2929;\">ESTADO</span></p></body></html>", nullptr));
        std4->setText(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "<html><head/><body><p align=\"center\"><span style=\" color:#ef2929;\">ESTADO</span></p></body></html>", nullptr));
        ocultar2->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("UDP_CLIENTE_PROCYETO", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDP_CLIENTE_PROCYETO: public Ui_UDP_CLIENTE_PROCYETO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_CLIENTE_PROCYETO_H
