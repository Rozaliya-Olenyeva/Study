#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_btn_totalPrice_clicked();

    void on_spinBox_DEC_valueChanged(int arg1);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
