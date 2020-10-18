#ifndef TUTORIALPLUGIN_H
#define TUTORIALPLUGIN_H

#include "QGCToolbox.h"

class QGCApplication;

class TutorialPlugin : public QGCTool
{
    Q_OBJECT
public:
    explicit TutorialPlugin(QGCApplication* app = nullptr, QGCToolbox* toolbox = nullptr);

    Q_INVOKABLE void qmlDebug(QString msg);

signals:

};

#endif // TUTORIALPLUGIN_H
