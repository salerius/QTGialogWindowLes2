#ifndef MYWINDOW
#define MYWINDOW

#include <QDialog> //деалоговое окно , клас которій содержет сшов, является базовім класом
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MyWindow : public QDialog
{
    Q_OBJECT // Щоб компілятор опрацював даний клас треба використовувати цей макрос

public:
    MyWindow(QWidget *parent=0);
private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *ok;
    QPushButton *close;
private slots:
//    void OkClicked();
//    void TextChanged(QString &str);


};

#endif // MYWINDOW


