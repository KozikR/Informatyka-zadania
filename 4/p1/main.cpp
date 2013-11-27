#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("Hello World");
    label.setAlignment(Qt::AlignCenter);
    label.show();
    return a.exec();
}
