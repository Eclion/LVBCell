#include "widget.h"
#include "ui_widget.h"
#include <QVTKWidget.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //new QVTKWidget();
}

Widget::~Widget()
{
    delete ui;
}
