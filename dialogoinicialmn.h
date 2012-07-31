#ifndef DIALOGOINICIALMN_H
#define DIALOGOINICIALMN_H

#include <QDialog>

namespace Ui {
    class DialogoInicialMN;
}

class DialogoInicialMN : public QDialog
{
    Q_OBJECT

public:
    explicit DialogoInicialMN(QWidget *parent = 0);
    ~DialogoInicialMN();

private:
    Ui::DialogoInicialMN *ui;
    int m;
    int n;

signals:
    void reject();
    void accept(int m, int n);

private slots:
    void setM(int m);
    void setN(int n);
    void concluiu();
};

#endif // DIALOGOINICIALMN_H
