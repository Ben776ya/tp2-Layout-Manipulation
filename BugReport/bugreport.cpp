#include "bugreport.h"
#include <QWidget>
#include <QLayout>
#include <QFormLayout>
#include <QApplication>
#include <QVBoxLayout>

BugReport::BugReport(QWidget * parent): QWidget(parent){

    //Creatign the widgets
    createWidgets();

    //place Widgets
    placeWidgets();

}

void BugReport::createWidgets()
{
        mainlayout = new QVBoxLayout();
    //    setLayout(mainlayout);
    //    setWindowTitle("Report Bug");
    //    layout1 = new QHBoxLayout();
    //    layout2 = new QHBoxLayout();
    //    layout3 = new QHBoxLayout();
    //    layout4 = new QHBoxLayout();
    //    layout5 = new QHBoxLayout();
    //    layout6 = new QHBoxLayout();
    //    layout7 = new QHBoxLayout();
    //    layout8 = new QHBoxLayout();

    layout = new QFormLayout;

//    label1 = new QLabel("Name:");
//    label2 = new QLabel("Company:");
//    label3 = new QLabel("Phone:");
//    label4 = new QLabel("Email:");
//    label5 = new QLabel("Problem title:");
//    label6 = new QLabel("Summary information:");
//    label7 = new QLabel("Reproducibility:");

    line1 = new QLineEdit();
    line2 = new QLineEdit();
    line3 = new QLineEdit();
    line4 = new QLineEdit();
    line5 = new QLineEdit();
    line6 = new QTextEdit();


    //    rst = new QPushButton("Reset");
    //    sbmt = new QPushButton("Submit Bug Report");
    //    dntSbmt = new QPushButton("Don't Submit");

    buttonbox = new QDialogButtonBox;

}

void
BugReport::placeWidgets()
{
    layout->addRow(tr("&Name:"), line1);
    layout->addRow(tr("&Company:"), line2);
    layout->addRow(tr("&Phone:"), line3);
    layout->addRow(tr("&Email:"), line4);
    layout->addRow(tr("Problem &Title:"), line5);
    layout->addRow(tr("&Summary Information:"),line6);


    combo = new QComboBox;
    combo->addItem(tr("Always"));
    combo->addItem(tr("Sometimes"));
    combo->addItem(tr("Rarely"));
    layout->addRow(tr("&Reproducibility:"),combo);

    buttonbox->addButton(tr("Submit Bug Report"), QDialogButtonBox::AcceptRole);
    buttonbox->addButton(tr("Don't Submit"), QDialogButtonBox::RejectRole);
    buttonbox->addButton(QDialogButtonBox::Reset);




    mainlayout->addLayout(layout);
    mainlayout->addWidget(buttonbox);
    setLayout(mainlayout);

}
