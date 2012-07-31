#ifndef STWIDGET_H
#define STWIDGET_H

#include <QWidget>

namespace Ui {
    class STWidget;
}

class STWidget : public QWidget
{
    Q_OBJECT

public:
    explicit STWidget(QWidget *parent = 0);

    ~STWidget();

signals:
    void mudouS(double _s);
    void mudouT(double _t);

public slots:
    void setS(double _s);
    void setT(double _t);

protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);

private:
    int s;
    int t;
    Ui::STWidget *ui;
};

#endif // STWIDGET_H
