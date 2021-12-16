#include "pending.h"
#include "ui_pending.h"

Pending::Pending(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pending)
{
    ui->setupUi(this);
}

Pending::~Pending()
{
    delete ui;
}
