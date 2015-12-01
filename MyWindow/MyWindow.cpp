#include "MyWindow.h"

MyWindow::MyWindow(QWidget *parent) :QDialog(parent)
{
    lbl = new QLabel("Enter");
    line = new QLineEdit;


    cb1=new QCheckBox("Верхний регистр");
    cb2=new QCheckBox("Инверсия");

    ok = new QPushButton("Ok");
    ok->setDefault(true);
    ok->setEnabled(false);
    close = new QPushButton("&Вихід");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    QVBoxLayout *right = new QVBoxLayout;
    right->addLayout(layout);
    right->addWidget(cb1);
    right->addWidget(cb2);

    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(ok);
    left->addWidget(close);


    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(right);
    main->addLayout(left);

    setLayout(main);

    setWindowTitle("MessageBox"); // Назва програти


}
