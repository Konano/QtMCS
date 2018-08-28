#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>
#include <QCheckBox>
#include <QDebug>

#define InputPipesLimit 2
#define OutputPipesLimit 3
#define SizeMinLimit 5
#define SizeMaxLimit 8

namespace Ui {
class Config;
}

class Config : public QDialog
{
    Q_OBJECT

public:
    explicit Config(int size, bool *input, bool *output, QWidget *parent = 0);
    ~Config();

signals:
    void finish(int,bool*,bool*);

private slots:
    void on_pushButton_clicked();

    void on_sizeBox_currentIndexChanged(int index);

private:
    Ui::Config *ui;
    QCheckBox *inCheckBox[8], *outCheckBox[8];

    void checkBoxEnableChange(int size);
};

#endif // CONFIG_H
