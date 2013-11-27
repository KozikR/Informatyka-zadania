#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;

    QVBoxLayout* mainLayout = new QVBoxLayout(&window);

    QHBoxLayout* L1 = new QHBoxLayout();
    QHBoxLayout* L2 = new QHBoxLayout();
    QHBoxLayout* L3 = new QHBoxLayout();
    QHBoxLayout* L4 = new QHBoxLayout();

    QLabel* label1 = new QLabel("One");
    QLabel* label2 = new QLabel("Two");
    QLabel* label3 = new QLabel("Three");
    QLabel* label4 = new QLabel("Four");
    QLabel* label5 = new QLabel("Five");
    QLabel* label6 = new QLabel("Six");

    QPushButton* button1 = new QPushButton("Close All");
    QObject::connect(button1, SIGNAL(clicked()), qApp, SLOT(quit()));

    L1->addWidget(label1);
    L1->addWidget(label2);
    L2->addWidget(label3);
    L2->addWidget(label4);
    L3->addWidget(label5);
    L3->addWidget(label6);
    L4->addWidget(button1);

    mainLayout->addLayout(L1);
    mainLayout->addLayout(L2);
    mainLayout->addLayout(L3);
    mainLayout->addLayout(L4);

    window.show();
    return a.exec();
}
