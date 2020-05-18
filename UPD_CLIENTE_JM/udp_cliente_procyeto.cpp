#include "udp_cliente_procyeto.h"
#include "ui_udp_cliente_procyeto.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

UDP_CLIENTE_PROCYETO::UDP_CLIENTE_PROCYETO(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UDP_CLIENTE_PROCYETO)
{
    ui->setupUi(this);
    setWindowTitle("laboratorio final de alse");// se le pone el nombre del proyecto en la ventana
    QStringList titulos;
    ui->tableWidget->setColumnCount(5);//declaramos cuantas columnas queremos en nuesta tablewidget
    titulos << "velocidad" << "frecuencia" << "voltaje" << "temperatura" << "time";//asignamos los nombres de cada columna de izquierda a derecha.
    ui->tableWidget->setHorizontalHeaderLabels(titulos);//le pasamos los nombres de las columnas a la tablewidget


}

UDP_CLIENTE_PROCYETO::~UDP_CLIENTE_PROCYETO()
{

    delete ui;
}


void UDP_CLIENTE_PROCYETO::on_pushButton_clicked()
{
    int pid,velocidadi=1800,frecuenciai=60,voltajei=120,temperaturai=40;
    int tv,frpor=60*0.05,tvolt,tt;
    long int numerocar;
    double rangos[8];
    QString carnt;
    carnt=ui->carnet->text();
    numerocar=carnt.toInt();
    char *argumento[3],direccion_c[16]={"./UDPCLIENTE.c"};
    char carnet_id[10]={0};
    for(int i=0;i<8;i++)
    {
        std::string cStd = carnt.toStdString();
        carnet_id[i]=cStd[i];
    }

    //---------------------------------



    //---------------------------------


    ui->ocultar2->close();
    ui->label_6->close();
    ui->label_2->close();
    ui->label_3->close();
    ui->label_4->close();
    ui->label_5->close();
    ui->veli->close();
    ui->frei->close();
    ui->volti->close();
    ui->temi->close();
    ui->vel->close();
    ui->fre->close();
    ui->volt->close();
    ui->tem->close();
    ui->letrero1->close();
    ui->letrero2->close();
    ui->std1->close();
    ui->std2->close();
    ui->std3->close();
    ui->std4->close();

    if(numerocar != 0 && numerocar > 2000000 && numerocar < 2200000){

       pid = fork();
       switch (pid)
       {
             case 0: //entrada proceso hijo
                    argumento[0]=direccion_c;
                    argumento[1]=carnet_id;
                    argumento[2]= NULL;
                    execv("/home/alse/UPD_cliente/UDPCLIENTE.bin",argumento);
             break;

             default://entra al proceso padre
                FILE *fp;
                char *buffer;
                int tam,k=0;
                fp=fopen("/home/alse/UPD_cliente/datos_motor.txt","r");
                if(fp==NULL)
                {
                   ui->letrero1->setText("no se pudo abrir el archivo");
                }
                fseek(fp,0,SEEK_END);
                tam=ftell(fp);
                buffer=(char*)malloc(tam*sizeof(char));
                rewind(fp);
                fread(buffer,1,tam,fp);
                //-------------------------------
                //se realiza el proceso para extraer los datos de .txt
                char contenido[tam];
                int l=0;
                for(int i=0;i<tam;i++)
                {
                    if(buffer[i]!=' ' && buffer[i]!='\0')
                    {
                        contenido[k]=buffer[i];
                        k++;
                    }
                    if(buffer[i]==' ' || buffer[i]=='\0')
                    {
                        rangos[l]=atof(contenido);
                        k=0;
                        l++;
                        contenido[0]='\0';
                    }
                }
                //--------------------------------------------
                //para extraer numero de carnet
                for(int i=0;i<tam;i++)
                {
                    if(buffer[i]!=' ' && buffer[i]!='\0')
                    {
                        contenido[k]=buffer[i];
                        k++;
                    }
                    if(buffer[i]==' ' || buffer[i]=='\0')
                    {
                        i=tam+12;
                    }
                }
                char tv1[3],tt1[2],tvol1[2];
                tv1[0]=contenido[2];
                tv1[1]=contenido[3];
                tt1[0]=contenido[7];
                tvol1[0]=contenido[5];
                tv = atoi(tv1);
                tt = atoi(tt1);
                tvolt = atoi(tvol1);


                //--------------------------
                //muestra labels

                ui->dvel->show();
                ui->dfre->show();
                ui->dvol->show();
                ui->dtem->show();
                ui->v->show();
                ui->f->show();
                ui->vl->show();
                ui->t->show();
                ui->rpm->show();
                ui->hz->show();
                ui->vs->show();
                ui->c->show();

                ui->label_6->show();
                ui->label_2->show();
                ui->label_3->show();
                ui->label_4->show();
                ui->label_5->show();
                ui->veli->show();
                ui->frei->show();
                ui->volti->show();
                ui->temi->show();
                ui->vel->show();
                ui->fre->show();
                ui->volt->show();
                ui->tem->show();
                ui->datos_real->show();
                ui->std1->show();
                ui->std2->show();
                ui->std3->show();
                ui->std4->show();
                ui->tableWidget->show();
                //---------------------------
                //oculta labels
                ui->letrero2->close();
                ui->pv->close();
                ui->pf->close();
                ui->pvl->close();
                ui->pt->close();
                //-----------------------------
                //asigna contenidos a los labels.
                ui->dvel->setText(QString::number(rangos[1]));
                ui->dfre->setText(QString::number(rangos[2]));
                ui->dvol->setText(QString::number(rangos[3]));
                ui->dtem->setText(QString::number(rangos[4]));

                ui->veli->setText(QString::number(velocidadi)+"±");
                ui->frei->setText(QString::number(frecuenciai)+"±");
                ui->volti->setText(QString::number(voltajei)+"±");
                ui->temi->setText(QString::number(temperaturai)+"±");
                ui->vel->setText(QString::number(tv));
                ui->fre->setText(QString::number(frpor));
                ui->volt->setText(QString::number(tvolt));
                ui->tem->setText(QString::number(tt));
                ui->label_6->setText("INFORMACION DE TOLERANCIA");
                ui->label_2->setText("VELOCIDAD [rpm]");
                ui->label_3->setText("FRECUENCIA [Hz]");
                ui->label_4->setText("VOLTAJE[V]");
                ui->label_5->setText("TEMPERATURA[°C]");

                fclose(fp);

                //-------------------------------------------
                // en esta parte de codigo se convierte el tiempo timestamp
                time_t rawtime=rangos[5]/1000;
                struct tm ts;
                char buf[80];
                ts=*localtime(&rawtime);
                strftime(buf, sizeof(buf),"%a %Y-%m-%d %H:%M:%S %Z",&ts);
                //--------------------------------------------
                //esta parte de codigo asignad el registro de cada click
                int fila;
                fila = ui->tableWidget->rowCount() - 1;
                ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                ui->tableWidget->setItem(fila,0,new QTableWidgetItem(QString::number(rangos[1])));// asignamos contenido a cada columna resptivamente de izquierda a derecha empezando desde 0 hasta n columnas.
                ui->tableWidget->setItem(fila,1,new QTableWidgetItem(QString::number(rangos[2])));
                ui->tableWidget->setItem(fila,2,new QTableWidgetItem(QString::number(rangos[3])));
                ui->tableWidget->setItem(fila,3,new QTableWidgetItem(QString::number(rangos[4])));
                ui->tableWidget->setItem(fila,4,new QTableWidgetItem(buf));
                //---------------------------------------------

                //evalua ragos de los datos del motor.
                if(rangos[1] < (velocidadi-tv) || rangos[1] > velocidadi+tv)
                {
                    ui->advertencia->show();
                    ui->pv->show();
                    ui->letrero3->show();
                    ui->pv->setText("ALERTA");
                    ui->todobien->close();
                    ui->letrero3->setText("      TOMAR ACCIONES SOBRE EL ESTADO DEL MOTOR");
                }else
                {
                   ui->pv->show();
                    ui->pv->setText("NORMAL");
                 }
                 if(rangos[2]<(frecuenciai-frpor) || rangos[2]>(frecuenciai+frpor))
                 {
                     ui->advertencia->show();
                     ui->pf->show();
                     ui->letrero3->show();
                     ui->pf->setText("ALERTA");
                     ui->todobien->close();
                     ui->letrero3->setText("      TOMAR ACCIONES SOBRE EL ESTADO DEL MOTOR");
                 }else
                 {
                     ui->pf->show();
                     ui->pf->setText("NORMAL");
                 }
                 if(rangos[3]<(voltajei-tvolt) || rangos[3]>(voltajei+tvolt))
                 {
                     ui->advertencia->show();
                     ui->pvl->show();
                     ui->letrero3->show();
                     ui->pvl->setText("ALERTA");
                     ui->todobien->close();
                     ui->letrero3->setText("      TOMAR ACCIONES SOBRE EL ESTADO DEL MOTOR");
                 }else
                 {
                     ui->pvl->show();
                     ui->pvl->setText("NORMAL");
                 }
                 if(rangos[4]<(temperaturai-tt) || rangos[4]>(temperaturai+tt))
                 {
                     ui->advertencia->show();
                     ui->todobien->close();
                     ui->letrero3->show();
                     ui->letrero3->setText("      TOMAR ACCIONES SOBRE EL ESTADO DEL MOTOR");
                     ui->pt->show();
                     ui->pt->setText("ALERTA");
                 }else
                 {
                     ui->pt->show();
                     ui->pt->setText("NORMAL");
                 }
                 if(rangos[1] > (velocidadi-tv) && rangos[1] < velocidadi+tv && rangos[2]>(frecuenciai-frpor) && rangos[2]<(frecuenciai+frpor) && rangos[4]>(temperaturai-tt) && rangos[4]<(temperaturai+tt) && rangos[3]>(voltajei-tvolt) && rangos[3]<(voltajei+tvolt))
                 {
                     ui->todobien->show();
                     ui->letrero3->show();
                     ui->letrero3->setText("EL MOTOR ESTA FUNCIONANDO EN OPTIMAS CONDICCIONES");
                     ui->advertencia->close();
                 }
                 //---------------------------------------------
        }//cierre swith

   }else
    {
        //muestra labels
        ui->letrero2->show();
        //oculta labels
        ui->label_6->close();
        ui->label_2->close();
        ui->label_3->close();
        ui->label_4->close();
        ui->label_5->close();
        ui->veli->close();
        ui->frei->close();
        ui->volti->close();
        ui->temi->close();
        ui->vel->close();
        ui->fre->close();
        ui->volt->close();
        ui->tem->close();
        ui->dvel->close();
        ui->dfre->close();
        ui->dvol->close();
        ui->dtem->close();
        ui->v->close();
        ui->f->close();
        ui->vl->close();
        ui->t->close();
        ui->rpm->close();
        ui->hz->close();
        ui->vs->close();
        ui->c->close();
        ui->pv->close();
        ui->pf->close();
        ui->pvl->close();
        ui->pt->close();
        ui->datos_real->close();
        ui->advertencia->close();
        ui->todobien->close();
        ui->letrero3->close();
        ui->std1->close();
        ui->std2->close();
        ui->std3->close();
        ui->std4->close();
        ui->tableWidget->close();
    }
}
