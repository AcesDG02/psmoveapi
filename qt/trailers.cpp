
/**
 * PS Move API
 * Copyright (c) 2011 Thomas Perl <thp.io/about>
 * All Rights Reserved
 **/

#include <QtCore>
#include <QtGui>
#include <QtDeclarative>

#include "psmoveqt.hpp"

int
main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Register the "PSMove" object for usage in QML
    PSMoveQt::registerQML();

    QDeclarativeView view;
    view.setWindowTitle("PS Move API - Move Trailers QML Example");
    view.setResizeMode(QDeclarativeView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/trailers.qml"));
    view.showMaximized();

    QObject::connect(view.engine(), SIGNAL(quit()),
                     &app, SLOT(quit()));

    return app.exec();
}
