#include "udp_cliente_procyeto.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UDP_CLIENTE_PROCYETO w;
    w.show();
    return a.exec();
}
