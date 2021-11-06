
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QLayout>
#include <QSpinBox>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QComboBox>
#include <QTextEdit>

class BugReport: public QWidget{
  Q_OBJECT


public:
    BugReport(QWidget * parent = nullptr);


protected:
    void createWidgets();
    void placeWidgets();


protected:
    QVBoxLayout * mainlayout;
//    QLayout * layout1;
//    QLayout * layout2;
//    QLayout * layout3;
//    QLayout * layout4;
//    QLayout * layout5;
//    QLayout * layout6;
//    QLayout * layout7;
//    QLayout * layout8;

    QFormLayout *layout;

    QLineEdit * line1;
    QLineEdit * line2;
    QLineEdit * line3;
    QLineEdit * line4;
    QLineEdit * line5;
    QTextEdit * line6;

    QComboBox * combo;

//    QLabel * label1;
//    QLabel * label2;
//    QLabel * label3;
//    QLabel * label4;
//    QLabel * label5;
//    QLabel * label6;
//    QLabel * label7;

    QVBoxLayout * v1layout;
    QVBoxLayout * vlayout;

//    QPushButton * rst;
//    QPushButton * sbmt;
//    QPushButton * dntSbmt;
//    QSpinBox * spin;

    QDialogButtonBox * buttonbox;



};


