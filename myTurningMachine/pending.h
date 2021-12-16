#ifndef PENDING_H
#define PENDING_H

#include <QWidget>

namespace Ui {
class Pending;
}

class Pending : public QWidget
{
    Q_OBJECT

public:
    explicit Pending(QWidget *parent = nullptr);
    ~Pending();

private:
    Ui::Pending *ui;
};

#endif // PENDING_H
