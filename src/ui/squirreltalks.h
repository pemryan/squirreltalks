#ifndef SQUIRRELTALKS_H
#define SQUIRRELTALKS_H

#include <QtGui/QMainWindow>
#include "ui_squirreltalks.h"

class SquirrelTalks : public QMainWindow
{
    Q_OBJECT

public:
    SquirrelTalks(QWidget *parent = 0);
    ~SquirrelTalks();

private:
    Ui::SquirrelTalksClass ui;
};

#endif // SQUIRRELTALKS_H
