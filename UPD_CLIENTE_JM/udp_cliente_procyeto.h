#ifndef UDP_CLIENTE_PROCYETO_H
#define UDP_CLIENTE_PROCYETO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class UDP_CLIENTE_PROCYETO; }
QT_END_NAMESPACE

class UDP_CLIENTE_PROCYETO : public QMainWindow
{
    Q_OBJECT

public:
    UDP_CLIENTE_PROCYETO(QWidget *parent = nullptr);
    ~UDP_CLIENTE_PROCYETO();

private slots:
    void on_pushButton_clicked();

    void on_letrero2_linkActivated(const QString &link);

    void on_UDP_CLIENTE_PROCYETO_iconSizeChanged(const QSize &iconSize);

    void on_centralwidget_windowIconTextChanged(const QString &iconText);

    void on_letrero2_windowIconTextChanged(const QString &iconText);

    void on_pushButton_2_clicked();

    void on_pushButton_pressed();

    void on_pushButton_released();

private:
    Ui::UDP_CLIENTE_PROCYETO *ui;
};
#endif // UDP_CLIENTE_PROCYETO_H
