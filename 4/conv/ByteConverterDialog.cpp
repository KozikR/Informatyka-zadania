#include "ByteConverter.h"
#include "ByteConverterDialog.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>

ByteConverterDialog::ByteConverterDialog()
{
    QVBoxLayout* mainLayout = new QVBoxLayout();
    QGridLayout* editLayout = new QGridLayout();

    QLabel* lDec = new QLabel("Decimal: ");
    QLabel* lHex = new QLabel("Hex: ");
    QLabel* lBin = new QLabel("Binary: ");

    QLineEdit* eDec = new QLineEdit();
    QLineEdit* eHex = new QLineEdit();
    QLineEdit* eBin = new QLineEdit();

    QHBoxLayout* buttonLayout = new QHBoxLayout();

    QPushButton* bQuit = new QPushButton("Quit");

    editLayout->addWidget(lDec,0,0);
    editLayout->addWidget(eDec,0,1);
    editLayout->addWidget(lHex,1,0);
    editLayout->addWidget(eHex,1,1);
    editLayout->addWidget(lBin,2,0);
    editLayout->addWidget(eBin,2,1);


    buttonLayout->addStretch();
    buttonLayout->addWidget(bQuit);

    mainLayout->addLayout(editLayout);
    mainLayout->addStretch();
    mainLayout->addLayout(buttonLayout);

    setLayout(mainLayout);
    setWindowTitle(tr("Converter"));

}
