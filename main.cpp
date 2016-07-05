#include "mainwindow.h"
#include <QApplication>
#include <QCommonStyle>
#include <QDebug>
#include <QFile>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication::setStyle(new QCommonStyle);
    QApplication a(argc, argv);

    QFile stylesheet("../UXDesign/StyleSheet.qss");
    if (!stylesheet.open(QFile::ReadOnly))
        return 0;
    a.setStyleSheet(stylesheet.readAll());
    stylesheet.close();

    MainWindow w;
    w.show();

    QFontDatabase database;
    qDebug() << database.families();

    return a.exec();
}
