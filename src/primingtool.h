#ifndef PRIMINGTOOL_H
#define PRIMINGTOOL_H

#include <QDialog>

namespace Ui {
class PrimingTool;
}

class PrimingTool : public QDialog
{
    Q_OBJECT
    
public:
    PrimingTool(QWidget *parent = 0);
    ~PrimingTool();
    
private:
    Ui::PrimingTool *ui;
};

#endif // PRIMINGTOOL_H
