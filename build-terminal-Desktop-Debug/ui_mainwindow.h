/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topbarWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *logoLbl;
    QSpacerItem *horizontalSpacer_5;
    QLabel *titleLbl;
    QSpacerItem *horizontalSpacer;
    QPushButton *stockPb;
    QPushButton *bondPb;
    QPushButton *indexPb;
    QPushButton *fundPb;
    QPushButton *futurePb;
    QPushButton *optionPb;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *mainPg;
    QWidget *stocksPg;
    QWidget *bondsPg;
    QWidget *indexesPg;
    QWidget *fundsPg;
    QWidget *futuresPg;
    QWidget *optionsPg;
    QWidget *toolPg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 1000);
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setMinimumSize(QSize(1440, 900));
        mainWidget->setMaximumSize(QSize(1440, 900));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topbarWidget = new QWidget(mainWidget);
        topbarWidget->setObjectName(QString::fromUtf8("topbarWidget"));
        topbarWidget->setMinimumSize(QSize(1440, 55));
        topbarWidget->setMaximumSize(QSize(1440, 55));
        horizontalLayout = new QHBoxLayout(topbarWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        logoLbl = new QLabel(topbarWidget);
        logoLbl->setObjectName(QString::fromUtf8("logoLbl"));

        horizontalLayout->addWidget(logoLbl);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        titleLbl = new QLabel(topbarWidget);
        titleLbl->setObjectName(QString::fromUtf8("titleLbl"));
        QFont font;
        font.setPointSize(15);
        titleLbl->setFont(font);

        horizontalLayout->addWidget(titleLbl);

        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stockPb = new QPushButton(topbarWidget);
        stockPb->setObjectName(QString::fromUtf8("stockPb"));

        horizontalLayout->addWidget(stockPb);

        bondPb = new QPushButton(topbarWidget);
        bondPb->setObjectName(QString::fromUtf8("bondPb"));

        horizontalLayout->addWidget(bondPb);

        indexPb = new QPushButton(topbarWidget);
        indexPb->setObjectName(QString::fromUtf8("indexPb"));

        horizontalLayout->addWidget(indexPb);

        fundPb = new QPushButton(topbarWidget);
        fundPb->setObjectName(QString::fromUtf8("fundPb"));

        horizontalLayout->addWidget(fundPb);

        futurePb = new QPushButton(topbarWidget);
        futurePb->setObjectName(QString::fromUtf8("futurePb"));

        horizontalLayout->addWidget(futurePb);

        optionPb = new QPushButton(topbarWidget);
        optionPb->setObjectName(QString::fromUtf8("optionPb"));

        horizontalLayout->addWidget(optionPb);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(topbarWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(topbarWidget);

        stackedWidget = new QStackedWidget(mainWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        mainPg = new QWidget();
        mainPg->setObjectName(QString::fromUtf8("mainPg"));
        stackedWidget->addWidget(mainPg);
        stocksPg = new QWidget();
        stocksPg->setObjectName(QString::fromUtf8("stocksPg"));
        stackedWidget->addWidget(stocksPg);
        bondsPg = new QWidget();
        bondsPg->setObjectName(QString::fromUtf8("bondsPg"));
        stackedWidget->addWidget(bondsPg);
        indexesPg = new QWidget();
        indexesPg->setObjectName(QString::fromUtf8("indexesPg"));
        stackedWidget->addWidget(indexesPg);
        fundsPg = new QWidget();
        fundsPg->setObjectName(QString::fromUtf8("fundsPg"));
        stackedWidget->addWidget(fundsPg);
        futuresPg = new QWidget();
        futuresPg->setObjectName(QString::fromUtf8("futuresPg"));
        stackedWidget->addWidget(futuresPg);
        optionsPg = new QWidget();
        optionsPg->setObjectName(QString::fromUtf8("optionsPg"));
        stackedWidget->addWidget(optionsPg);
        toolPg = new QWidget();
        toolPg->setObjectName(QString::fromUtf8("toolPg"));
        stackedWidget->addWidget(toolPg);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(mainWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logoLbl->setText(QCoreApplication::translate("MainWindow", "Logo", nullptr));
        titleLbl->setText(QCoreApplication::translate("MainWindow", "Trading Terminal", nullptr));
        stockPb->setText(QCoreApplication::translate("MainWindow", "\320\220\320\272\321\206\320\270\320\270", nullptr));
        bondPb->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\270\320\263\320\260\321\206\320\270\320\270", nullptr));
        indexPb->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\265\320\272\321\201\321\213", nullptr));
        fundPb->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\320\275\320\264\321\213", nullptr));
        futurePb->setText(QCoreApplication::translate("MainWindow", "\320\244\321\214\321\216\321\207\320\265\321\200\321\201\321\213", nullptr));
        optionPb->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\206\320\270\320\276\320\275\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
