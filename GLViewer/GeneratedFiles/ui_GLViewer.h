/********************************************************************************
** Form generated from reading UI file 'GLViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLVIEWER_H
#define UI_GLVIEWER_H

#include <GLWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLViewerClass
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pbLoad;
    QLineEdit *leFilePath;
    GLWidget *GLWidgetMain;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GLViewerClass)
    {
        if (GLViewerClass->objectName().isEmpty())
            GLViewerClass->setObjectName(QStringLiteral("GLViewerClass"));
        GLViewerClass->resize(956, 631);
        actionOpen = new QAction(GLViewerClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionClose = new QAction(GLViewerClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralWidget = new QWidget(GLViewerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pbLoad = new QPushButton(centralWidget);
        pbLoad->setObjectName(QStringLiteral("pbLoad"));

        gridLayout->addWidget(pbLoad, 0, 2, 1, 1);

        leFilePath = new QLineEdit(centralWidget);
        leFilePath->setObjectName(QStringLiteral("leFilePath"));

        gridLayout->addWidget(leFilePath, 0, 1, 1, 1);

        GLWidgetMain = new GLWidget(centralWidget);
        GLWidgetMain->setObjectName(QStringLiteral("GLWidgetMain"));

        gridLayout->addWidget(GLWidgetMain, 1, 0, 1, 3);

        GLViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GLViewerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 956, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        GLViewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GLViewerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GLViewerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GLViewerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GLViewerClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);

        retranslateUi(GLViewerClass);

        QMetaObject::connectSlotsByName(GLViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *GLViewerClass)
    {
        GLViewerClass->setWindowTitle(QApplication::translate("GLViewerClass", "GLViewer", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("GLViewerClass", "Open", Q_NULLPTR));
        actionClose->setText(QApplication::translate("GLViewerClass", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("GLViewerClass", "File Path", Q_NULLPTR));
        pbLoad->setText(QApplication::translate("GLViewerClass", "Load", Q_NULLPTR));
        leFilePath->setText(QApplication::translate("GLViewerClass", "c:\\Users\\fridr\\source\\repos\\GLViewer\\Data\\ATAStore1D.txt ", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("GLViewerClass", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GLViewerClass: public Ui_GLViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLVIEWER_H
